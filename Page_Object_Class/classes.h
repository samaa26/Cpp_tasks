
#ifndef CLASSES_H
#define CLASSES_H


#include <iostream>
#include <string>
#include<vector>
#include<array>
#include <bits/stdc++.h>
#include <memory>


using namespace std;

class pageobject{


public:
pageobject() = default;
virtual ~pageobject() = default;

pageobject(string obj) {

object=obj;


};
virtual void additem(){

cout<<"this is the base add function\n";

}
virtual void removeitem(){

cout<<"this is the base remove function\n";

}
virtual void deleteitem(){

cout<<"this is the base delete function\n";


}

pageobject operator+(const pageobject &rhs){

  pageobject result;

  result.object=this->object+rhs.object;
  return result;

}
friend ostream& operator<<(ostream& os, const pageobject& obj) {
        os << obj.object;
        return os;
    }


protected:
string object;

};


class Copy:public pageobject{
private:
vector<pageobject*> items;
public:
Copy() : pageobject() {}
// Copy(vector<pageobject*> item){

//  items=item;

// }
void additem(vector<pageobject*> item){

    for(auto i:item){
        items.push_back(i);
    }
    
    cout<<"items are added to the copy page\n";
}
void additem()override {

cout<<"this is the copy add function\n";

}
void removeitem() override{
    cout<<"this is the copy remove function\n";
    if (!items.empty()) {
            items.pop_back();
            cout << "the copy page is empty"<<endl;
        } else {
            cout << "items are removed from copy page" << endl;
        }



}
void deleteitem()override{

cout<<"this is the copy delete function\n";
items.clear();
cout<<"the copy page is cleared\n";

}



};

class page:public pageobject{
public:
void additem() override{

cout<<"this is the page add function\n";


}
void additem(pageobject obj1,pageobject obj2){

cout<<"this is the page add function\n";
pageobject obj3;
obj3=obj1+obj2;
cout<<"adding result "<<obj3<<endl;

}
void removeitem() override{

cout<<"this is the page remove function\n";

}
void deleteitem()override{

cout<<"this is the page delete function\n";

}
};

#endif