// ladder condition
// outer condition
#include<iostream>
using namespace std;
int main()
{
//     int a,b,c;
//     cout<<"enter 1 no\n";
//     cin>>a;
//     cout<<"enter 2no\n";
//     cin>>b;
//     cout<<"enter 3no\n";
//     cin>>c;
//     if( a>b &&  a>c){
//         cout<<a<< " is large";
//     }
//     else if( b>a && b>c){
        
//          cout<<b<< "is large";
//     }
//     else if(a==b && a<c){
//         cout<<c<< " is large";

//     }
//     else if( a==b && a>c){
//         cout<<a<< "is large";
//     }
//     else if(b==c && b!=a){
//         cout<< b<< " is large";
//     }
//     else if(a==b&& b==c){
//         cout<<"numbers are equal";
//     }
//     else {
//         cout<<c<< " is large";
//     }

    
// }
float physics, chemistry, math;
cout<<" enter physics number\n";
cin>>physics;
if(physics>0&&  physics <=0){
    

}

cout<<"enter chemistry number\n";
cin>>chemistry;
cout<<"enter math number\n";
cin>>math;
float percentage = ((physics+chemistry+math)/3);
cout<<"percentage is "<<percentage<< endl;

 if(percentage >= 60 && percentage <=100){
    cout<<" student is in first division";
} else if (percentage>=50 && percentage<=59){
    cout<< " student is  in second division";
} else if(percentage>=35 && percentage<=49){
cout<<" student is in third division";

}else {
    cout<<"student is fail";
}
}

