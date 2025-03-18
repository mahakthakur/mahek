#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a number";
    cin>>a;
    cout<<"\n press 1 for even/odd, 2 for leap year, 3 for square of the number, 4 for cube of the number";
    cin>>b;
    switch(b){
        case 1:
        {
            if(a%2==0){
                cout<<"it is even number";
            }else{
                cout<<"it is odd number";
            }
            break;
           
        }
        case 2:
        {
            if(a%4==0&& a%100!=0 || a%400){
                cout<<"it is a leap year";

            } else{
                cout<<"it is not a leap year";
            
            }
            break;

        }
        case 3:
        {
          cout<<"sqare of that number"<<a*a;
          break;
        }
        case 4:
        {
            cout<<"cube of that number"<<a*a*a;
            break;
        }
        default:
        cout<<"invalid choice";
        break;



    }
    

}