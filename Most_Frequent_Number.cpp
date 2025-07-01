#include <iostream>
using namespace std;


// int main(){
// //without another array
//    int arr[8]={4,5,9,12,9,22,45,7};

//    int count,frequent=0,num;
//    for (int i=0;i<8;i++){
//        count=1;
//      for(int j=i+1;j<8;j++){
       
//       if(arr[j]==arr[i]){
//         count++;
//         if(count>frequent){
//         frequent=count;
//         num=arr[i];
//         }
//       }
     
//      }
//    }
   
// cout<<"the most frequent number is "<<num<<" and it is mentioned "<<frequent<<" times\n";

//     return 0;
// }
int main(){
//with another array
   int arr[8]={4,5,9,12,9,22,45,7};
   int arr1[8]={0,0,0,0,0,0,0,0};

   int count,frequent=0,num;
   for (int i=0;i<8;i++){
       count=1;
     for(int j=i+1;j<8;j++){
       
      if(arr[j]==arr[i]){
        count++;
        
      }
     }
     arr1[i]=count;
   }
     
     for (int i=0;i<8;i++){
     
       
      if(arr1[i]>frequent){
        frequent=arr1[i];
        num=arr[i];
        
      }
      
      }
   
   std::cout<<"the most frequent number is "<<num<<" and it is mentioned "<<frequent<<" times\n";

    return 0;
}