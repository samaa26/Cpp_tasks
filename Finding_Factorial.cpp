#include<iostream>

using namespace std;

int factorial_fun1(int number);
int factorial_fun2(int number);


int main(){
int number,factorial;

cout<<"please enter the number to get its factorial "<< "\n";
cin>>number;

factorial=factorial_fun1(number);

cout<<" the factorial of number "<<number<<" is "<< factorial<<"\n";

}
int factorial_fun1(int number){
    int num,result=1;
   for(int i=number;i>0;i--){
   result=result*i;

   }
   
  return result;
}
int factorial_fun2(int number){
    if(number > 1)
    return number * factorial_fun2(number - 1);
  else
    return 1;
}