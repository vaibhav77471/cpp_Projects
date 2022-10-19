#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<" Enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    char operators;
    cout<<"select the operation : ";
    cin>>operators;
    

    switch(operators){
        case '+':{
                
                cout<<a + b;
                break;
        }
        case '-':{
            
            cout<<a - b;
            break;
        }
        case '*':{
            
            cout<<a * b;
            break;
        }
        case '/':{
            
            cout<<a / b;
            break;
        }    
        case '%':{
            
            cout<<a % b;
            break;
        }
        default:{
            cout<<"invalid operation";
        }
    }

    return 0;
}