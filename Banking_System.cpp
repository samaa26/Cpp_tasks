#include<iostream>

using namespace std;


namespace SavingsAccount{

    double total=0;

void createAccount(double initialBalance){

    
    
        total=total+initialBalance;
        cout<<"a saving account is created with initial balance = "<<initialBalance<<" LE"<<endl;
   
    }


void addInterest(double rate){

    double anual_salary,interest_added;
    
        cout<<"please enter your anual salary\n";
        cin>>anual_salary;
        interest_added=anual_salary*rate;
        cout<<"the interest to be add is = "<<interest_added<<" LE"<<endl;
        total=total+interest_added;
    

}
double getBalance(){
    
    return total;
}

}


namespace CheckingAccount{

    double total=0;

void createAccount(double initialBalance){
  
        total=total+initialBalance;
        cout<<"a checking account is created with initial balance = "<<initialBalance<<" LE"<<endl;
}
void applyFee(double fee){

        total=total-fee;
    

}
double getBalance(){
    
    return total;
}

}

int main(){

double saving,checking;

SavingsAccount::createAccount(8000);
SavingsAccount::addInterest(0.25);
saving=SavingsAccount::getBalance();
cout<<"the balance of the saving account is "<<saving<<" LE\n";
CheckingAccount::createAccount(20000);
CheckingAccount::applyFee(1500);
checking=CheckingAccount::getBalance();
cout<<"the balance of the checking account is "<<checking<<" LE\n";

    


}