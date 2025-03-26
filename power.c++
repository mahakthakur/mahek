#include<iostream>
using namespace std;
int main(){
    int n; cout<<"enter your base";
    cin>>n;
    int p, j=1;
    cout<<"enter your power";
    cin>>p;
    for( int i=1; i<=p; i++){
        j=j*n;
    }
    cout<<j;
}