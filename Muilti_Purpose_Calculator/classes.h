#ifndef CLASSES_H
#define CLASSES_H


#include <iostream>
#include <string>
#include<vector>
#include<array>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;


class calculator{

public:

virtual void add()=0;
virtual void sub()=0;
virtual void display()=0;
~calculator(){}

};

class basecalculator:public calculator{
public:

void add() override{
 float sum;
  cout<<"please enter two numbers to add\n";
  cin>>num1;
  cin>>num2;
  sum=0;
  sum=num1+num2;
  cout<<"sum= "<<sum<<endl;
}


void sub() override{
 float sub;
  cout<<"please enter two numbers to subtract\n";
  cin>>num1;
  cin>>num2;
  sub=0;
  sub=num1-num2;
  cout<<"sub= "<<sub<<endl;
}

void display() override{
  cout<<"basic calculator operation\n";
  
}

private:
float num1;
float num2;


};


class programmercalculator:public calculator{
public:

void add() override{
 float sum;
  cout<<"please enter two numbers to add\n";
  cin>>num1;
  cin>>num2;
  sum=0;
  sum=num1+num2;
  cout<<"sum= "<<sum<<endl;
}


void sub() override{
 float sub;
  cout<<"please enter two numbers to subtract\n";
  cin>>num1;
  cin>>num2;
  sub=0;
  sub=num1-num2;
  cout<<"sub= "<<sub<<endl;
}

void display() override{
  cout<<"programming calculator operation\n";
  
}

void hexToDec() {
    string hex;
    
    // Prompt the user for input
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimal = 0;
    int base = 1; // Represents 16^0

    // Traverse the string from right to left
    for (int i = hex.size() - 1; i >= 0; i--) {
        char digit = hex[i];

        // Convert character to its decimal value
        if (digit >= '0' && digit <= '9') {
            decimal += (digit - '0') * base;
        } else if (digit >= 'A' && digit <= 'F') {
            decimal += (digit - 'A' + 10) * base;
        } else if (digit >= 'a' && digit <= 'f') {
            decimal += (digit - 'a' + 10) * base;
        } else {
            cerr << "Invalid hexadecimal digit: " << digit << endl;
          
        }

        base *= 16;
    }

    cout<<"decimal number= "<<decimal<<endl;
}


void decToHex() {
    int decimal;

    // Prompt the user for input
    cout << "Enter a decimal number: ";
    cin >> decimal;

    

    string hex = "";
    const char hexDigits[] = "0123456789ABCDEF";
    if (decimal == 0) hex="0";
    // Perform the conversion
    while (decimal > 0) {
        int remainder = decimal % 16;
        hex = hexDigits[remainder] + hex; // Add the hex digit at the front
        decimal /= 16;
    }
    
    cout<<"hex number= "<<hex<<endl;
}


private:
float num1;
float num2;


};


class scientificcalculator:public calculator{
public:

void add() override{
 float sum;
  cout<<"please enter two numbers to add\n";
  cin>>num1;
  cin>>num2;
  sum=0;
  sum=num1+num2;
  cout<<"sum= "<<sum<<endl;
}


void sub() override{
 float sub;
  cout<<"please enter two numbers to subtract\n";
  cin>>num1;
  cin>>num2;
  sub=0;
  sub=num1-num2;
  cout<<"sub= "<<sub<<endl;
}

void display() override{
  cout<<"scientific calculator operation\n";
  
}

void sin_angle(){

int degree;
float result,rad;

cout<<"please enter the angle in degrees to get sin\n";
cin>>degree;
rad = degree*3.14159/180;
result=sin(rad);


cout<<"result: "<<result<<endl;
}

void cos_angle(){

int degree;
float result,rad;

cout<<"please enter the angle in degrees to get cos\n";
cin>>degree;
rad = degree*3.14159/180;
result=cos(rad);


cout<<"result: "<<result<<endl;
}

private:
float num1;
float num2;


};

#endif