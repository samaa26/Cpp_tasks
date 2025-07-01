#include<iostream>
#include<array>
#include <algorithm>
using namespace std;

// int greater_element (int x,int y){

//     return x>y;
// }

int main(){
    
    int num_list[8]={0,0,0,0,0,0,0,0};


   cout<<"please enter 8 numbers\n";
   for(int i=0;i<8;i++){
   cin>>num_list[i];

   }
   sort(num_list,num_list+8);
for(int i=0;i<8;i++){
   cout<<num_list[i]<<endl;

   }
cout<<"greatest numbers are "<<num_list[7]<<" "<<num_list[6]<<" "<<num_list[5]<<endl;

    return 0;
}


//QUESTION:
//why when i used stl array like this [array<int,8> num_list] the sort didnt work and gave a compiler error and i try it using the function above it also gave compiler error can you guide me please? thank you
