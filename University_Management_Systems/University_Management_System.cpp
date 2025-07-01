#include <iostream>
#include <string>
#include<vector>
#include "classes.h"
using namespace std;

 int professor::curr_id = 1;
 int student::curr_id = 1;


int main(){

vector<person*>person;
person.push_back(new professor);
person.push_back(new student);
person.push_back(new professor);
person[0]->getdata();
person[0]->putdata();
person[1]->getdata();
person[1]->putdata();
person[2]->getdata();
person[2]->putdata();

for (auto& item:person){
delete item;
}
  return 0;  
}