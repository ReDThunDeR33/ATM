#include <iostream>
using namespace std ;
int main() {
while (true){
int current_ammount;
int option ;
int withdraw;
int Balance;
int Balance1;
int Transfer;
int number;
int Reciver;
cout<<"ATM"<<endl;
cout<<"1 Withdraw Money"<<endl;
cout<<"2 Transfer Money"<<endl;
cout<<"3 Check Recent Transactions"<<endl;
cout<<"Press"<<endl;
cin>>option;
switch(option){

case 1 :
    cout<<"Enter your current amount "<< endl;
cin>>current_ammount;
    cout<<"Enter Withdraw Amount"<<endl;

cin>>withdraw;
{
     if (current_ammount>withdraw)
 {
Balance = current_ammount - withdraw;
cout<<"Now Balannce is "<<Balance<<endl;}
else
    cout<<"Not Valid"; }
    break ;


case 2 :
    cout<<"Enter your current amount "<< endl;
cin>>current_ammount;
    cout<<"Enter  reciver's account balance "<<endl;
    cin>>number;
    cout<<"Enter the amount you want to transfer"<<endl;
    cin>>Transfer;
    { if (current_ammount>Transfer){

        Balance1 = current_ammount-Transfer;
        Reciver = number + Transfer;
        cout<<"Now Balance is "<<Balance1<<endl;
        cout<<"Reciver's amount is "<<Reciver<<endl;

    }
    else
        cout<<"Not Valid";}
        break ;


case 3 :
    cout<<"Showing recent Transactions"<<endl;
    cout<<"Withdraw "<<Balance<<endl;
    cout<<"Transfer "<<Transfer<<endl;
    break;
default :
    cout<<"Invalid . Try Again"<<endl;

}

}
return 0;
}
