/**start = {1, 3, 0, 5, 8, 5}
finish = {2, 4, 6, 7, 9, 9}
output = {0 ,1, 3, 4}
*/
#include <bits/stdc++.h>
using namespace std;
void highestActivities(int s[], int f[], int n){
    int i, j;
    cout <<" activities are selected are given below "<< endl;
    i = 0;
    cout <<" "<< i;

    for (j = 1; j < n; j++){

      if (s[j] >= f[i]){
          cout <<" " << j;
          i = j;
      }
    }

}

int main(){
    int event,i ;
    cout<<"Enter how many event... "<<endl;
    cin>>event;
    int start[event],finish[event];
    cout<<"Enter start time...maximum "<<event<<endl;
    for(i=0;i<event;i++){
        cin>>start[i];
    }

    cout<<"Enter finish time...maximum "<<event<<endl;
    for(i=0;i<event;i++){
        cin>>finish[i];
    }
    int n = sizeof(start)/sizeof(start[0]);
    highestActivities(start, finish, n);
    return 0;
}
