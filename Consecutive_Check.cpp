#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool test(vector<int> nums);

int main(){


int num;
bool answer;

cout<<"please enter the number of elements\n";
cin>>num;
vector<int> nums(num,0);
cout<<"please enter the elements\n";
for(int i=0;i<num;i++){

cin>>nums[i];

}

answer=test(nums);
cout<<answer<<endl;
if(answer==true){
    cout<<"vector numbers are consecutive\n";
}
else{
    cout<<"vector numbers are not consecutive\n";
}
    return 0;
}
bool test(vector<int> nums){
 
   sort(nums.begin(),nums.end());
   for(int i=0;i<nums.size();i++){
      cout<<nums[i]<<endl;
   }

   for(int i=0;i<nums.size()-1;i++){
      if(nums[i+1]-nums[i]==1){
        continue;
      }
      else{
        return false;
        break;
      }
    
   }
  return true; 
}