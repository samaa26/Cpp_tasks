

#include <iostream>
#include <string>
using namespace std;

class Student {

    public:
    
    void set_id(int id_n) {
        id = id_n; // Use "this->id" to refer to the class member variable
    }
    int get_id() const {
        return id;
    }
    void set_age(int age_n) {
        age = age_n; // Use "this->age" to refer to the class member variable
    }
    int get_age() const {
        return age;
    }
    void set_name(string name_n) {
        name = name_n; // Use "this->name" to refer to the class member variable
    }
    string get_name() const {
        return name;
    }
    void info_print(){
        cout<<get_id()<<endl;
        cout<<get_age()<<endl;
        cout<<get_name()<<endl;
    }
    private:
    int id, age;
    string name;
};

int main() {
    Student student1;
    Student student2;
    Student student3;

    student1.set_id(207100);
    student1.set_age(22);
    student1.set_name("samaa");

    student2.set_id(207101);
    student2.set_age(21);
    student2.set_name("sam");

    student3.set_id(207102);
    student3.set_age(20);
    student3.set_name("sa");

    // Print student1 details
    student1.info_print();

    return 0;
}
