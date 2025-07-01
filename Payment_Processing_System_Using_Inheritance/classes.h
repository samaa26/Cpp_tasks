#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
using namespace std;


class paymentmethod {

public:
paymentmethod (float amount_n){

amount=amount_n;

};

void set_amount(float amount_new){
    amount=amount_new;
}

float get_amount(){
    return amount;
}


protected:

float amount;

};


class creditcard:public paymentmethod{

public:
creditcard(float credit_num,float amount_n2):paymentmethod(amount){

cardnumber=credit_num;
amount=amount_n2;
};

void processpayment(){
    cout<<"the credit card with number "<<cardnumber<<" has an amount of "<<amount<<endl;
}

private:

float cardnumber;


};



class paypal:public paymentmethod{

public:
paypal(string email,float amount_n2):paymentmethod(amount){

emailaddress=email;
amount=amount_n2;
};

void processpayment(){
    cout<<"the paypal account with email address "<<emailaddress<<" has an amount of "<<amount<<endl;
}



private:

string emailaddress;


};


#endif
