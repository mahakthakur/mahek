#include<iostream>
using namespace std;
int main(){
   // armstrong number
   int a,n=0, s=0, k;
   cout<<"enter three digit number";
   cin>>a;
   k=a;
   if(a<1000 && a>99){
     
     do
     {
      a=a%10;
      s=s+(a*a*a);
      a=a/10;

     } while (a>0);
     if(k==s){
      cout<<"it is a armstrong number";
     }else{
      cout<<"it is not armstrong";
     }
    
     }else{
      cout<<"it is invalid number";
   }


   
  
    
}