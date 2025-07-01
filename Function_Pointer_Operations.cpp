#include<iostream>
using namespace std;

int add_fun(int x,int y){
    return x+y;
}

int sub_fun(int x,int y){
    return x-y;
}


int main(){
string operation;
int result;
int(*add_fun_ptr)(int,int)=&add_fun;
int(*sub_fun_ptr)(int,int)=&sub_fun;
int *ptr,n1,n2;
cout<<"please enter the operation + - \n";
cin>>operation;
cout<<"please enter number1\n";
cin>>n1;
cout<<"please enter number2 \n";
cin>>n2;

if(operation=="+"){
    result=(*add_fun_ptr)(n1,n2);
}
else{
result=(*sub_fun_ptr)(n1,n2);

}

cout<<"result= "<<result<<endl;
    return 0;
}