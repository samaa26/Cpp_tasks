#include <iostream>
#include <vector>

using namespace std;


int main(){
int x=3,y=9,z=10;

auto print=[&](){
x=x*2;
y=y*2;
z=z*2;
cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
};
auto print_value=[=](){
cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
};
auto print_only_two=[& x,& y](int factor){
x=x+factor;
y=y+factor;

cout<<x<<"\n"<<y<<"\n";
};



print();
print_value();
print_only_two(10);


    return 0;
}