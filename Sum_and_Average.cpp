#include<iostream>
#include <array>
using namespace std;

int main(){
   // int n1,n2,n3,n4,n5;
   int sum=0;
   float average;
    array<int,5> num_list;

cout<<"please enter 5 numbers\n";
//cin>>n1>>n2>>n3>>n4>>n5;
for(int i=0;i<5;i++){
    cin>>num_list[i];
    sum=sum+num_list[i];
}
average=sum/5.0;
cout<<"sum of numbers= "<<sum<<endl;
cout<<"average of numbers= "<<average<<endl;
    return 0;
}