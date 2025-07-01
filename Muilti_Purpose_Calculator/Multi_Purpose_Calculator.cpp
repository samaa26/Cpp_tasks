

#include <iostream>
#include <string>
#include<vector>
#include<array>
#include <bits/stdc++.h>
#include "classes.h"

using namespace std;


int main(){
string letter;
string input1;
int attemp=0;

calculator *cal;
basecalculator c1;
programmercalculator c2;
scientificcalculator c3;


while (attemp<3){
cout<<"this is the calculator, please enter the letter of the calculator type to use\n";
cout<<"B:base calculator\n";
cout<<"S:scientific calculator\n";
cout<<"P:programmer calculator\n";
cout<<"E:Exit\n";
cin>>letter;
if(letter=="B"){

cal=&c1;
c1.display();
cout<<"please enter S to subtract or A to add\n";
cin>>input1;
if(input1=="S"){
    c1.sub();
}
else if(input1=="A"){
    c1.add();
}

}
else if(letter=="S"){

cal=&c3;
c3.display();
cout<<"please enter S to give sin of angle or C to give cosin\n";
cin>>input1;
if(input1=="S"){
    c3.sin_angle();
}
else if(input1=="C"){
    c3.cos_angle();
}


}
else if(letter=="P"){

cal=&c2;
c2.display();
cout<<"please enter H to convert hex to decimal or D to convert decimal to hex\n";
cin>>input1;
if(input1=="H"){
    c2.hexToDec();
}
else if(input1=="A"){
    c2.decToHex();
}

}
else if(letter=="E"){

break;


}
else{
    cout<<"invalid input, you have  "<<2-attemp<<" more attempts\n";
    attemp++;
}

}

    return 0;
}