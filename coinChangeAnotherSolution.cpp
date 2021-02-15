#include <iostream>    /// taka/coin value =1000, 500, 100, 50,20,10,5,2
using namespace std;  /// iterative method

void output(){
    double N;
    int value, rest;
    while(cin >> N){
    value = N;
    cout << value/1000 << "  notes of 1000 taka\n";
    rest = (value%1000);
    cout << rest/500 << " notes of 500  taka\n";
    rest = (rest%500);
    cout << rest/100 << "  notes of 100  taka\n";
    rest = (rest%100);
    cout << rest/50 << " notes of 50  taka\n";
    rest = (rest%50);
    cout << rest/20 << " notes of 20 taka\n";
    rest = (rest%20);
    cout << rest/10 << " notes of 10 taka\n";
    rest= (rest%10);
    cout << rest/5 << " notes of 5 taka\n";
    rest = (rest%5);
    cout << rest/2 << " notes of  2 taka\n";
    rest= (rest%2);
     cout << rest/1 << " notes of 1 taka\n";
    rest= (rest%1);
    }
}

int main(){
    double N;
    int value, rest;
    cout<<"Enter amount of  money"<<endl;
    output();
    return 0;
}
