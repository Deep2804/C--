#include<iostream>
using namespace std;
int main() {
    int ch = '1';
    int num =1;
    cout<<endl;
    switch(ch) {
        case 1: cout<<"First"<<endl;
                cout<<"first again"<<endl;
                break;
        case '1': switch(num) {

                  case 1: cout<<"Value of num is "<<num<<endl;
                   break;
                }
             break;

        default: cout<<"It is default case"<<endl;
    }
  cout<<endl;  
  return 0;

}