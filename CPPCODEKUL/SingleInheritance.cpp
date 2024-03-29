/*WAP to create Super class and create subclass Manager and Developer and print thier details*/


#include<iostream>
using namespace std;

class Employee {
    int id;
    double salary;
    double raise;
    public:
        Employee();
        Employee(int, double, double);
        void display();
        void set_id(int);
        void set_salary(double);
        void set_raise(double);
        int get_id();
        double get_salary();
        double get_raise();
        void do_increment();
};
Employee :: Employee() {
    id = 0;
    salary = 0.0;
    raise = 0.0;
}
Employee :: Employee(int id, double salary, double raise) {
    this->id = id;
    this->salary = salary;
    this->raise = raise;
}
void Employee :: display() {
    cout<<"Id: "<<id<<endl<<"Salary: "<<salary<<endl;
}
void Employee :: set_id(int id) {
    this->id = id;
}
void Employee :: set_salary(double salary) {
    this->salary = salary;
}
void Employee :: set_raise(double raise) {
    this->raise = raise;
}
int Employee :: get_id() {
    return id;
}
double Employee :: get_salary() {
    return salary;
}
double Employee :: get_raise() {
    return raise;
}
void Employee :: do_increment() {
    salary += salary * raise;
}

class Developer : public Employee { /*Derived or sub Class : Public Super Class means gets access to public memebers of Super class which will
					be used in this derived class*/
    int desk_id;
    public:
        Developer();
        Developer(int, double, double, int);/*First 3 will be its Employee class values and last will be its desk id*/
        void set_desk_id(int);
        int get_desk_id();
        void display();
};
Developer :: Developer() {
    desk_id = 0;
}
Developer :: Developer(int id, double salary, double raise, int desk_id) : Employee(id, salary, raise) {
    this->desk_id = desk_id;
}
void Developer :: set_desk_id(int desk_id) {
    this->desk_id = desk_id;
}
int Developer :: get_desk_id() {
    return desk_id;
}
 void Developer :: display() {
     Employee :: display();
     cout<<"Desk Id: "<<desk_id<<endl;
 }

class Manager : public Employee {/*Derived or sub Class : Public Super Class means gets access to public memebers of Super class which will
					be used in this derived class*/
    int cabin_id;
    public:
        Manager();
        Manager(int, double, double, int);	/*First 3 will be its Employee class values and last will be its cabin id*/
        void set_cabin_id(int);
        int get_cabin_id();
        void display();
};
Manager :: Manager() {
    cabin_id = 0;
}
Manager :: Manager(int id, double salary, double raise, int cabin_id) : Employee(id, salary, raise) {
    this->cabin_id = cabin_id;
}
void Manager :: set_cabin_id(int cabin_id) {
    this->cabin_id = cabin_id;
}
int Manager :: get_cabin_id() {
    return cabin_id;
}
void Manager :: display() {
    Employee :: display();
    cout<<"Cabin Id: "<<cabin_id<<endl;
}

int main() {
    // Employee e1(1, 10000, 0.3);
    // e1.display();
    // e1.set_salary(9000.0);
    // e1.display();
    // e1.do_increment();
    // e1.display();

    Developer d1(1, 10000, 0.3, 123);
    d1.display();
    Manager m1(2, 20000, 0.4, 321);
    m1.display();

    d1.do_increment();
    d1.display();
    m1.do_increment();
    m1.display();

    return 0;
}
