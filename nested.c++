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
// float physics, chemistry, math;
// cout<<" enter marks of physics, chemistry, math";
// cin>>physics>>chemistry>>math;
// if(physics>=0&&  physics<=100) && (chemistry>=0&& chemistry<=100) && ( math>=0&& math<=100){
//     cout<<"valid";
// }
// else {
//    cout<< "invaild";
// }



// float percentage = ((physics+chemistry+math)/3);
// cout<<"percentage is "<<percentage<< endl;

//  if(percentage >= 60 && percentage <=100){
//     cout<<" student is in first division";
// } else if (percentage>=50 && percentage<=59){
//     cout<< " student is  in second division";
// } else if(percentage>=35 && percentage<=49){
// cout<<" student is in third division";

// }else {
//     cout<<"student is fail";
// }
// }
// leap year 

int years;
cout<<"enter year";
cin>>years;
if(years<1000 || years>9999){
    cout<<"invalid";
}
else
if(years%4==0 && years%100!=0 || years%400==0){
    cout<<"it is a leap year";
}
else
if(years%4!=0) {
    cout<<"it is not a leap year";
}
else{
    cout<<"invalid";
}
}



