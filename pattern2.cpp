#include<iostream>
using namespace std;
int main(){
     // //diamond shape
     // for(int i=1; i<=4; i++){
     //      for(int j=4; j>=i; j--){
     //           cout<<" ";
     //      }
     //           for(int k=1; k<=i; k++){
     //                cout<<i;

     //           }
     //           cout<<"\n";
          
     // // }
     // char a;
     // for(char i='a'; i<='d'; i++){
     //      for(char j='c'; j>=i; j--){
     //           cout<<" ";
     //      }
     //      for(char k='a'; k<=i; k++){
     //           cout<<k;
               
     //      }
     //      cout<<"\n";
     // }
     int n=1;
     for(int i=1; i<=4; i++){
          for(int j=3; j>=i; j--){
               cout<<" ";
          }
               for(int k=1; k<=i; k++){

                    cout<<n;
                    n++;
                    
               }
               cout<<"\n";
          
     }

    
}


