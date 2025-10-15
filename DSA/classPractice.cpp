#include<iostream>
using namespace std;

struct employee{
    string name;
    int age;
    int uid;
    float salary;
};

int main(){
    employee one;
    one.name = "Rajan";
    one.age = 20;
    one.uid = 12345;
    one.salary = 10000000;

    cout << "Employee name is :"<< one.name << endl;
    cout << "Employee age is :"<< one.age << endl;
    cout << "Employee uid is :"<< one.uid << endl;
    cout << "Employee salary is :"<<one.salary << endl;
}