#include<iostream>
using namespace std;
/******variable******/
int balance = 1000;  //الرصيد
int deposit ;    //الايداع
int withDraw ;   //السحب
int passWord ;
int choice ;
/****end of the variable****/

/***display the menu of Atm***/
void show(){
    cout<<"**** Menu ****"<<endl;
    cout<< "1-Balance"<<endl;
    cout<< "2-Deposit"<<endl;
    cout<< "3-WithDraw"<<endl;
    cout<< "4-Exit"<<endl;
    cout<< "*************"<<endl;
}

void process()
{
    cout<<"enter your password :"<<endl;
    cin>>passWord;
    do
    {
    if (passWord == 12345)
    {
    
        cout<<"enter you choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"your balance is "<<balance<<endl;
            break;
        case 2:
            cout<<"your balance is "<<balance<<endl;
            cout<<"Enter your deposit money :"<<endl;
            cin>>deposit;
            balance += deposit;
            cout<<"your new balance is "<<balance<<endl;
            break;
        case 3:
            cout<<"Note : your balance is "<<balance<<endl;
            cout<<"Enter your amount "<<endl;
            cin>>withDraw;
            if (withDraw > balance)
            {
                cout<<"sorry you can't withdraw this amount"<<endl;
            }else{
                balance -= withDraw;
                cout<<"Now : your balance is "<<balance<<endl;
            }
                break;
        case 4:
                cout<<"thank you"<<endl;
                break;
        default:
                break;
        }//end of switch
    
    }else{
        char option ;
        cout<<"password is incorrect , Do you want to try Again ? Enter [Y] of Yes or [N] for No "<<endl;
        cin>>option;
        if (option == 'y' || option == 'Y')
        {
            cout<<"enter your password"<<endl;
            cin>>passWord;
        }else{
            cout<<"thank you";
            choice = 4;
        }
        
    }
}//end of do
    
    while (choice < 4);
}//end of process
int main(){
    show();
    process();
}