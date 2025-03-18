#include<iostream>
using namespace std;
int main(){
    int b;
    char c;
    cout<<"enter any character\n";
    cin>>c;
    cout<<"select 1 for vowel and consonent pr 2 for male female";
    cin>>b;
    switch(b){
        case 1:
        {
            if(c=='u'|| c=='e'|| c=='i'|| c=='0'|| c=='a' ){
                cout<<"it is a vowel";

            }
            else{
                cout<<"it is a consonent";
            }
            break;
        }
        case 2:
        {
            if(c=='m'|| c=='M'){
                cout<<"Male";
            }else if(c=='m'|| c=='M'){
                cout<<"female";
            }else{
                cout<<"others";
            }
            break;
        }
        default:
        cout<<"invalid choice";
        break;
    }

}
