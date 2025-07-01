#include<iostream>

using namespace std;

int maximum_of_two_numbers(int first_number,int second_number);


int main(){
int max_of_two,first_number,second_number,third_number,maximum;

cout<<"please enter the first number "<< "\n";
cin>>first_number;
cout<<"please enter the second number "<< "\n";
cin>>second_number;
cout<<"please enter the third number"<< "\n";
cin>>third_number;

max_of_two=maximum_of_two_numbers(first_number,second_number);
if(max_of_two>third_number){
    maximum=max_of_two;
}
else{
    maximum=third_number;
}
cout<<" the maximum number of these three numbers is "<<maximum<<"\n";

}
int maximum_of_two_numbers(int first_number,int second_number){
    int max;

    if(first_number>second_number){
        max=first_number;
    }
    else{
        max=second_number;
    }
  return max;
}