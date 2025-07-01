#include<iostream>
using namespace std;


int main(){

int num=5,num1=6;
auto lambda=[num]() mutable {num=7;
cout<<num<<endl;}; //cannot change a variable called by value unless the keyword mutable is used
lambda();


auto lambda1=[& num1]()  {num1=8;
cout<<num1<<endl;}; //called by reference
lambda1();

cout<<num<<endl; //is not modified out of scope because it is called by value
cout<<num1<<endl; //is modisied out of scope because it is called by reference


    return 0;
}