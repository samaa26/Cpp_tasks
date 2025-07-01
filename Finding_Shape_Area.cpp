#include<iostream>
#include<cmath>

using namespace std;


float circle_area(float radius);
void circle_all();
float rectangle_area(float length, float width);
void rectangle_all();
float triangle_area(float length, float width);
void triangle_all();
float square_area(float length);
void square_all();
void print();


int answer;
float radius,area,length,width;

enum shapes{

    circle=1,
    rectangle,
    triangle,
    square
};

int main(){

    
    print();
    cin>>answer;
    switch(answer){

        case circle:
           circle_all();
        break;

        case rectangle:
            rectangle_all();
        break;

        case triangle:
            triangle_all();
        break;

        case square:
            square_all();
        break;

    }


    

}


float circle_area(float radius){
    float area;
        
        area=M_PI* pow(radius,2);


return area;
}
void circle_all(){
           cout<<"please enter the circle radius\n";
           cin>>radius;
           area=circle_area(radius);
           cout<<"area= "<<area<<endl;

}

float rectangle_area(float length, float width){
    float area;
        
        area=width*length;


return area;
}

void rectangle_all(){
           cout<<"please enter the rectangle length\n";
            cin>>length;
            cout<<"please enter the rectangle width\n";
            cin>>width;
            area=rectangle_area(length,width);
            cout<<"area= "<<area<<endl;
}

float triangle_area(float length, float width){
    float area;
        
        area=width*length*0.5;


return area;
}

void triangle_all(){
            cout<<"please enter the triangle length\n";
            cin>>length;
            cout<<"please enter the triangle width\n";
            cin>>width;
            area=triangle_area(length,width);
            cout<<"area= "<<area<<endl;
}


float square_area(float length){
    float area;
        
        area=pow(length,2);


return area;
}
void square_all(){
           cout<<"please enter the square length\n";
           cin>>length;
           area=square_area(length);
           cout<<"area= "<<area<<endl;
}

void print(){

cout<<"please enter the shape you want to calculate its area\n";
    cout<<"1-circle\n";
    cout<<"2-rectangle\n";
    cout<<"3-triangle\n";
    cout<<"4-square\n";



}