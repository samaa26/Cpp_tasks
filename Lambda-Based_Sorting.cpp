#include<iostream>
#include<algorithm>
#include<array>
using namespace std;


void des_sort(int *arr,int num){
    sort(arr,arr+num,greater<int>());
for(int i=0;i<num;i++){
    cout<<arr[i]<<endl;
}

    
}

int main(){
cout<<"please enter number of elements\n";

int num;
cin>>num;
int arr[num];
//int array[num];
cout<<"please enter the elements\n";
for(int i=0;i<num;i++){
    cin>>arr[i];
}
auto lambda=[&](){des_sort(arr,num);};
lambda();



    return 0;
}