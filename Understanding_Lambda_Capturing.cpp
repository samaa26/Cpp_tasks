#include<iostream>
using namespace std;


int main(){

int x=5;

auto lambda1=[](int a){cout<<a<<endl;};
auto lambda2=[x](int b){cout<<x<<endl;
                        cout<<b<<endl;};


void (*lambda1_ptr)(int)=lambda1;
//void (*lambda2_ptr)(int)=lambda2;

(*lambda1_ptr)(5);
//(*lambda2_ptr)(7);


    return 0;
}
/*
Since C++11, there has been an implicit conversion from a lambda to a
function pointer so long as the lambda has no captures. If the lambda
has captures, the implicit conversion is disabled. However it's easy to
get a function pointer from a lambda-with-captures if we use global variables or the heap
*/