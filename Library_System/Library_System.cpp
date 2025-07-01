#include <iostream>
#include <string>
#include<vector>
#include "classes.h"
using namespace std;


int main(){
vector<libraryitem*> fulllist ;
fulllist.push_back(new book("gfcghjvk","bjhvgvgc",1));
fulllist.push_back(new magazine("gbbbbbb",857,0));
for (auto& item : fulllist) {
        item->displayInfo();
        cout << "--------------------------\n";
    }
fulllist[0]->borrowItem();
fulllist[1]->returnItem();
for (auto& item : fulllist) {
        item->displayInfo();
        cout << "--------------------------\n";
    }
for (auto& item : fulllist) {
        delete item;
    }

    return 0;
}