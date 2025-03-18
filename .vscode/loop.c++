#include <iostream>
using namespace std;
int main(){
    int a;
    
    cin>>a;
    do{
        if(a%2==0){
        cout<<a<<"\t";
        }
        a++;
    } while(a<=10);
}
