#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    for(int i=1; i<=50; i++){
        f = f*10+n%10;
        n=n/10;

        
    }
    cout<<f;
    
   

}