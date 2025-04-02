#include<iostream>
using namespace std;
int main(){
    // collection of similar type of data is called array.. there are two types of array numeric array associative array...
    // numeric array a numeric array having numeric indexing and integer indexing that always start from 0 .. there are three type of numeric array
    // one dimensonal 2. 2dimensonal array 3d array 
    // note there are drawback of array it is easily hackable... 
    // if size is beyond 10 than it is print output...!! 
    // assoosiative array= (key,value) ; it is having key and value pair where key belongs indexing that should we unique ....  
    // one dimensional array:- syntax; it having only one subscript.... 
    // datatype arrayname [size]; 
   // [] subscript..
   // in array data is stored in linear way...||
   int accno[10]= {3,2,3};
   int s = sizeof(accno)/sizeof(accno[0]);
   cout<<"size of array="<<s<<"\n";
   accno[5]=20;
   for(int i=0; i<=s; i++){
    
    cout<<accno[i]<<"\t";

   }




   


   

   // different way of initialization of an array... 
   




    
}