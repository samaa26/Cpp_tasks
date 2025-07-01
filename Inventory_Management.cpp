#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <string.h>
using namespace std;


struct Inventory{

string name;
float price;
int quantity;
};
float total=0;

int main(){



vector<Inventory> inventory = {
        {"Laptop", 1000.0f, 10},
        {"Smartphone", 500.0f, 15},
        {"Tablet", 300.0f, 0} // Out of stock
    };



auto updateprice=[&inventory](string name_n, float price_n){
    for(auto& item:inventory){
        if (name_n==item.name){
            item.price=price_n;
        }
    }
   
};

auto outofstock=[=](string name_n){
    for(auto& item:inventory){
        if (name_n==item.name){
            if (item.quantity==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
  
};

auto calculatetotal=[&inventory](){
    for(auto& item:inventory){
        total=total+(item.price*item.quantity);
    }
   return total;
};



 
bool check=outofstock("Laptop");
cout<<check<<endl;


updateprice("Smartphone",800);
 for (const auto& item : inventory) {
        cout << "Name: " << item.name 
             << ", Price: $" << item.price 
             << ", Quantity: " << item.quantity << endl;
    }


total=calculatetotal();
cout<<total<<endl;
    return 0;
}