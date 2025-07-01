#include<iostream>

using namespace std;

float first_number,second_number,result;
string user_operator;

int main(){

cout<<"please enter the first number "<< "\n";
cin>>first_number;
cout<<"please enter the second number "<< "\n";
cin>>second_number;
cout<<"please enter the operator "<< "\n";
cin>>user_operator;

if (user_operator=="+"){
    result=first_number+second_number;
    cout<<"result= "<< result<<"\n";
}
else if (user_operator=="-"){
    result=first_number-second_number;
    cout<<"result= "<< result<<"\n";
}
else if (user_operator=="*"){
    result=first_number*second_number;
    cout<<"result= "<< result<<"\n";
}
else if (user_operator=="/"){
    result=first_number/second_number;
    cout<<"result= "<< result<<"\n";
}
else{
   cout<<"wrong operator\n"; 
}


}