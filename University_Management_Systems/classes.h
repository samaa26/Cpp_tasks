#ifndef CLASSES_H
#define CLASSES_H


#include <iostream>
#include <string>
#include<vector>
#include<array>
#include <bits/stdc++.h>

using namespace std;

class person{
protected:
string name;
int age;

public:
virtual void getdata()=0;
virtual void putdata()=0;
virtual ~person(){}

};


class professor:public person{

public:
void getdata() override{

    cout<<"please enter your name,age and number of puplications\n";
    cin>>name;
    cin>>age;
    cin>>publications;
}

void putdata() override{

    cout<<"Name: "<<name<<"    age: "<<age<<"    number of publications: "<<publications<<"     current id: "<<curr_id++<<endl;
    
}

private:
int publications;
static int curr_id;

};


class student:public person{

public:
void getdata() override{

    cout<<"please enter your name,age and your marks\n";
    cin>>name;
    cin>>age;
    for(int i=0;i<marks.size();i++){
      cin>>marks[i];
    }
    
}

void putdata() override{
    int sum=0;
    sum=accumulate(marks.begin(),marks.end(),sum);
    cout<<"Name: "<<name<<"    age: "<<age<<"    sum of marks: "<<sum<<"     current id: "<<curr_id++<<endl;
    
}

private:
array<int,6> marks;
static int curr_id;

};


#endif