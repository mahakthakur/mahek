#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b;
    

    cout<<"enter any number";
    cin>>b;
    if(b<0){
        cout<<"invalid";
    } else{
    do{
        cout<<b*a<<"\n";
        a++;
    }while(a<=10);
}

}
