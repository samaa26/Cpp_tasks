

#include "classes.h"

using namespace std;

int main(){

pageobject obj1("Hello ");
pageobject obj2("World!");

    // Create a Page and perform addition
page page;
page.additem(obj1, obj2);

    // Create a Copy object and manage PageObjects
Copy copy;
vector<pageobject*> base ;
base.push_back(new pageobject("start"));
base.push_back(new pageobject("through"));
base.push_back(new pageobject("end"));
//vector<page*> derived ;

    copy.additem(base);
   // copy.addItem(derived);

    copy.removeitem();
    copy.deleteitem();




    return 0;
}