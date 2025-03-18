#include<iostream>
using namespace std;
// switch case symtax
int main(){
    // switch(condition)
    int a,b,c;
    cout<<"enter two different nnumber\n";

    cin>>a>>b;
    cout<<"\n  select 1 for +, 2 for *, 3for /, 4 for -";
    cin>>c;
    switch(c){
        case 1:
        {
            cout<<a+b;
            break;
        }
        case 2:
        {
            cout<<a*b;
            break;
        }
        case 3:{
            cout<<a/b;
            break;
        }
        case 4:{
            cout<<a-b;

        }
        default:
        {
            cout<<"invalid choice";
            break;
        }
    }


}
