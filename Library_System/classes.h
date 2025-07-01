#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
using namespace std;



class libraryitem{

public:

/*displayInfo(): Outputs details about the library item.
isAvailable(): Returns a boolean indicating whether the item is available for borrowing.
borrowItem(): Handles the logic for borrowing the item.
returnItem(): Handles the logic for returning the item.
A virtual destructor is provided to ensure proper cleanup of derived classes when they are deleted.*/
virtual void displayInfo()=0;
virtual bool isAvailable()=0;
virtual void borrowItem()=0;
virtual void returnItem()=0;
virtual ~libraryitem() {}
};



class book:public libraryitem{

private:

string title;
string author;
bool availability;

public:
book(string title_b, string author_b,bool availability_b){

    title=title_b;
    author=author_b;
    availability=availability_b;
};
void displayInfo()  override {
        cout << "Book Title: " << title << "\nAuthor: " << author
             << "\nAvailable: " << (availability ? "Yes" : "No") << endl;
    }

bool isAvailable()  override {
        return availability;
    }

void borrowItem() override {
        if(availability){
            cout<<"item is borrowed"<<endl;
            availability=0;
        }
        else{
            cout<<"object not available"<<endl;
        }
    }
void returnItem() override {
        
            cout<<"item is returned"<<endl;
            availability=1;
       
    }

};


class magazine:public libraryitem{

private:

string title;
float issuenumber;
bool availability;

public:
magazine(string title_m, float issuenumber_m,bool availability_m){

    title=title_m;
    issuenumber=issuenumber_m;
    availability=availability_m;
};
void displayInfo()  override {
        cout << "Book Title: " << title << "\nissue number: " << issuenumber
             << "\nAvailable: " << (availability ? "Yes" : "No") << endl;
    }

bool isAvailable()  override {
        return availability;
    }
void borrowItem() override {
        if(availability){
            cout<<"item is borrowed"<<endl;
            availability=0;
        }
        else{
            cout<<"object not available"<<endl;
        }
    }
void returnItem() override {
        
            cout<<"item is returned"<<endl;
            availability=1;
       
    }

};






#endif