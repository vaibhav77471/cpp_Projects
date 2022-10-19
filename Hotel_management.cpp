#include<iostream>
using namespace std;

int main(){
    int Quant;
    int Choice;

    int QRooms = 0, QPasta = 0, QNoodles = 0, QBurger = 0, QChicken = 0, QShake = 0 ;
    int Sold_Rooms = 0, Sold_Pasta = 0, Sold_Noodles = 0, Sold_Burger = 0, Sold_Chicken = 0, Sold_Shake = 0 ;
    int Total_Rooms = 0, Total_Pasta = 0, Total_Noodles =0, Total_Burger = 0, Total_Chicken = 0, Total_Shake = 0 ;

    cout<<"\n\t -: Quantity of item we have :-";
    cout<<endl;
    cout<<"\n Rooms available : ";
    cin>>QRooms;
    cout<<"\n Quantity of pasta : ";
    cin>>QPasta;
    cout<<"\n Quantity of Noodles : ";
    cin>>QNoodles;
    cout<<"\n Quantity of Burger : ";
    cin>>QBurger;
    cout<<"\n Quantity of Chicken : ";
    cin>>QChicken;
    cout<<"\n Quantity of Shake : ";
    cin>>QShake;
    cout<<endl;

    m:
    cout<<"\n\t\t please select from the menu";

    cout<<"\n1)Rooms";
    cout<<"\n2)Pasta";
    cout<<"\n3)Noodles";
    cout<<"\n4)Burger";
    cout<<"\n5)Chicken";
    cout<<"\n6)Shake";
    cout<<"\n7)Information of the sales";
    cout<<"\n8)Exit";
    cout<<endl;

    cout<<" Enter the Choice : ";
    cin>>Choice;

    switch(Choice){

            case 1:
            cout<<"\n\t Enter the Quantaty of Rooms you would like to Book : ";
            cin>>Quant;
            if(QRooms - Sold_Rooms >= Quant){
                Sold_Rooms = Sold_Rooms + Quant;
                Total_Rooms = Total_Rooms + Quant * 1200;
                cout<<"\n\n\t"<< Quant <<" Rooms alloted to you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Rooms << " Rooms remaining in Hotel";
            }
            break;


            case 2:
            cout<<"\n\t Enter the Quantaty of Pasta you would like to order : ";
            cin>>Quant;
            if(QPasta - Sold_Pasta >= Quant){
                Sold_Pasta = Sold_Pasta + Quant;
                Total_Pasta = Total_Pasta + Quant * 150;
                cout<<"\n\n\t"<< Quant <<" Pasta Ordered from you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Pasta << " Pasta remaining in Hotel";
            }
            break;


            case 3:
            cout<<"\n Enter the Quantaty of Noodles you would like to order : ";
            cin>>Quant;
            if(QNoodles - Sold_Noodles >= Quant){
                Sold_Noodles = Sold_Noodles + Quant;
                Total_Noodles = Total_Noodles + Quant * 50;
                cout<<"\n\n\t"<<Quant<<" Noodles Ordered from you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Noodles << " Noodles remaining in Hotel";
            }
            break;


            case 4:
            cout<<"\n Enter the Quantaty of Burger you would like to order : ";
            cin>>Quant;
            if( QBurger - Sold_Burger >= Quant){
                Sold_Burger = Sold_Burger + Quant;
                Total_Burger=Total_Burger + Quant * 80;
                cout<<"\n\n\t"<<Quant<<" Burger Ordered from you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Burger << " Burger remaining in Hotel";
            }
            break;


            case 5:
            cout<<"\n Enter the Quantaty of Chicken you would like to order : ";
            cin>>Quant;
            if(QChicken-Sold_Chicken >= Quant){
                Sold_Chicken=Sold_Chicken + Quant;
                Total_Chicken=Total_Chicken + Quant * 120;
                cout<<"\n\n\t"<<Quant<<" Chicken Ordered from you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Chicken << " Chicken remaining in Hotel";
            }
            break;


            case 6:
            cout<<"\n Enter the Quantaty of Shake you would like to Order : ";
            cin>>Quant;
            if(QShake-Sold_Shake > Quant){
                Sold_Shake=Sold_Shake + Quant;
                Total_Shake=Total_Shake + Quant * 1200;
                cout<<"\n\n\t"<<Quant<<" Shake Ordered from you";
            }
            else{
                cout<<"\n\n\t Only"<< Quant - Sold_Shake << " Shake remaining in Hotel";
            }
            break;


            case 7:
            cout<<"\n\t\t -: Details of the Sales & Collection :-";

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Rooms we had : "<< QRooms;
            cout<<"\n Number of Rooms we gave for rent :"<<Sold_Rooms;
            cout<<"\n Number of Rooms remaining : "<< QRooms - Sold_Rooms;
            cout<<"\n Total collection of Rooms : "<< Total_Rooms;

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Pasta we had : "<< QPasta;
            cout<<"\n Number of Pasta we sold :"<<Sold_Pasta;
            cout<<"\n Number of Pasta remaining : "<< QPasta - Sold_Pasta;
            cout<<"\n Total collection of Pasta : "<< Total_Pasta;

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Noodles we had : "<< QNoodles;
            cout<<"\n Number of Noodles we gave for rent :"<<Sold_Noodles;
            cout<<"\n Number of Noodles remaining : "<< QNoodles - Sold_Noodles;
            cout<<"\n Total collection of Noodles : "<< Total_Noodles;

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Burger we had : "<< QBurger;
            cout<<"\n Number of Burger we sold :"<<Sold_Burger;
            cout<<"\n Number of Burger remaining : "<< QBurger - Sold_Burger;
            cout<<"\n Total collection of Burger : "<< Total_Burger;

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Chicken we had : "<< QChicken;
            cout<<"\n Number of Chicken we sold :"<<Sold_Chicken;
            cout<<"\n Number of Chicken remaining : "<< QChicken - Sold_Chicken;
            cout<<"\n Total collection of Chicken : "<< Total_Chicken;

            cout<<endl;
            cout<<endl;

            cout<<"\n Number of Shake we had : "<< QShake;
            cout<<"\n Number of Shake we sold :"<<Sold_Shake;
            cout<<"\n Number of Shake remaining : "<< QShake - Sold_Shake;
            cout<<"\n Total collection of Shake : "<< Total_Shake;
        case 8:
            exit(0);

            default:
            cout<<"\n\t\t Please select from the number above";
    }

    goto m;

    return 0;
}