#include<iostream>
using namespace std;


void arr_fun(int *ptr,int num,int &size_arr,int &size_ele){
 
size_arr=sizeof(ptr[0])*num;
size_ele=sizeof(ptr[0]);

}

int main(){

int arr[7]={1,2,3,4,6,8,9};

int size_ele,size_arr;
arr_fun(arr,7,size_arr,size_ele);

cout<<"size of array element is "<< size_ele<<" and size of whole array is "<<size_arr<<endl;


    return 0;
}