#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Bank {
    //private variables used inside of class
    private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;

    //public variables
    public:
    //function to set the person's data
    void setvalue(){
        cout<<"Enter Name\n";
        cin.ignore();

        //To use space in string
        getline(cin, name);

        cout<<"Enter Account Number\n";
        cin>>accnumber;

        cout<<"Enter Account Type\n";
        cin>>type;

        cout<<"Enter Balance \n";
        cin>>tot;

    }


    //Function to display the required data
    void showdata(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account No : "<<accnumber<<endl;
        cout<<"Account type : "<<type<<endl;
        cout<<"Balance : "<<tot<<endl;
    }

    //Function to deposite the amount in ATM
    void deposite(){
        cout<<"\n Enter amount to be deposited \n";
        cin>>amount;

    }

    //Function to show the Balance amount
    void showbalance(){
        tot = tot + amount;
        cout<<"\n Total Balance is : "<<tot<<endl;

    }

    //Function to withdraw the amount in ATM
    void withdraw(){
    int a, avai_balance;
    cout<< " Enter amount to withdraw \n";
    cin>>a;
    avai_balance = tot -a;
    cout<<"Available Balance is : "<<avai_balance<<endl;
    
    }

    //function for exit
    void exit(int = 0){
        cout<<"YOU EXITED"<<endl;

   }

};




int main(){
    //object of class
    Bank b;
    int choice;

    //infinite while loop for choose operation everytime
    while(1){
        cout<<"\n*****************WELCOME********************\n\n";
        cout<<"Enter your choice"<<endl;
        cout<<"\t 1. Enter Name, Account"
            <<"Number, Account type\n";
         cout<<"\t 2. Balance Enquiry\n";
        cout<<"\t 3. Deposite Money\n";
        cout<<"\t 4. Show Total Balance\n";
        cout<<"\t 5. Withdraw Money\n";
        cout<<"\t 6. Cancel\n";

        //taking choice from the user
        cin>>choice;

        //choice to select from
        switch(choice){
            case 1:
            b.setvalue();
            break;
            case 2:
            b.showdata();
            break;
            case 3:
            b.deposite();
            break;
            case 4:
            b.showbalance();
            break;
            case 5:
            b.withdraw();
            break;
            case 6:
            b.exit(0);
            break;
            default:
            cout<<"\n Invalide choice\n";
        }


    }
}