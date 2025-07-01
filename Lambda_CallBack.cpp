#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
void Calculate(function<void(void)> print);

int main(){
int num;
vector<int> v1;
vector<int> v2;

cout<<"please enter the number of elements of the vectors\n";
cin>>num;

cout<<"please enter the first vector elements\n";
for(int i=0;i<num;i++){
    int number;
    cin>>number;
    v1.push_back(number);
}


cout<<"please enter the second vector elements\n";
for(int i=0;i<num;i++){
     int number;
    cin>>number;
    v2.push_back(number);
}

auto swap=[&](){
   sort(v2.begin(),v2.end());
   
   vector<int> temp(num,0);
   for(int i=0;i<num;i++){
    temp[i]=v1[i];
    v1[i]=v2[i];
    v2[i]=temp[i];
   }
  return true; 
};

auto print=[&](){
   bool response;
   response=swap();
    
   if(response==true){
    
    cout<<"v1= ";
   for(int i=0;i<num;i++){
    cout<<v1[i];
   }
   cout<<endl;
   cout<<"v2= ";
   for(int i=0;i<num;i++){
    cout<<v2[i];
   }
   cout<<endl;
   cout<<"sucessful swap\n";
   }
   else{
    cout<<"error: swap couldn't be done";
   }
   };


Calculate(print);



    return 0;
}

void Calculate(function<void(void)> print){
print();

}

//i have encapsulated print and swap in the same function which is print to get the response
//and print the error message and in the calculate function i run print only
//i couldnt solve it with both functions as arguments for calculate function
//please guide me thank you