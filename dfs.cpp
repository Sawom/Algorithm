#include<iostream>
#include<vector>
using namespace std;

class Graph{
public:
    int V;
    vector<int> *adj;
    bool *visited;
    Graph(int V);
    void addEdge(int V1, int V2);
    void DFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
    visited = new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i] = false;
    }
}

void Graph::addEdge(int V1, int V2){
    adj[V1].push_back(V2);

}

void Graph::DFS(int s){
    visited[s] = true;
    cout<<s<<" , ";
    for(int i=0;i<adj[s].size();i++)
    {
        int v = adj[s].at(i);
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    int V = 4;
    Graph g(V);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(0,2);
    g.addEdge(2,1);
    g.addEdge(2,3);
    for(int i=0;i<V;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<g.adj[i].size();j++)
        {
            cout<<g.adj[i].at(j)<<" , ";
        }
        cout<<endl;
    }
    g.DFS(0);
}


