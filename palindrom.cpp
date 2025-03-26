#include<iostream>
using namespace std;
int main(){
    int n,c=0,k;
    cout<<"enter your number";
    cin>>n;
    k=n;
    while(n>0){
         c = c*10+n%10;
        n=n/10;

    }
    if (c==k){
        cout<<"it is palindrom";
    }else{
        cout<<"it is not palindrom";
    }
    
        
    
    
}
