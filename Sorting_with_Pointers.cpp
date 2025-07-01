#include<iostream>
using namespace std;

void swap(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
void bubble_sort(int *ptr,int num){
    int count=0;
  while(count<=num){
    for(int i=0;i<num-1;i++){
        
        if(ptr[i]>ptr[i+1]){
          swap(ptr[i],ptr[i+1]);
                 }
    }
    count++;
  }
    for (int i=0; i<num;i++){

        cout<<ptr[i]<<endl;
     }
}
void select_sort(int *ptr,int num){
 
  for(int i=0;i<num;i++){
    int min_index=i;
    for(int j=i+1;j<num;j++){
   if(ptr[j]<ptr[i]){
    min_index=j;
    swap(ptr[i],ptr[min_index]);
   }

 
  } 
  cout<<ptr[i]<<endl;
  }

}
int main(){

int num,arr[num],answer;
void(*bubble_sort_ptr)(int *,int)=& bubble_sort;
void(*select_sort_ptr)(int *,int)=& select_sort;
cout<<"please enter the number of elements\n";
cin>>num;
cout<<"please enter the numbers\n";
for(int i=0;i<num;i++){

    cin>>arr[i];
}

cout<<"please enter 1 to choose buble sort and choose 2 for selection sort\n";
cin>>answer;
if (answer==1){

    (*bubble_sort_ptr)(arr,num);
}
else if(answer==2){
    (*select_sort_ptr)(arr,num);
}
else{
    cout<<"there is no such choise please try again";
}

    return 0;
}