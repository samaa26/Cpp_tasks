#include<iostream>
using namespace std;

int main(){
    int num,count;
    float result=0;
    cout<<"please enter a number\n";
    cin>>num;
    for(int i=2;i<num;i++){

      result=num/i;
      if(num%i==0){
        cout<<"the number "<<num<<" is not prime\n";
        return 0;

      }

    }
  
    cout<<"the number "<<num<<" is prime\n";
  



    return 0;
}