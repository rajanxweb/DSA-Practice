#include <iostream>
using namespace std;
typedef struct employee{
    int eid;
    int age;
    float salary;

} emp;
int main(){
    emp e;
    e.eid = 1;
    e.age = 20;
    e.salary = 100000;

    cout <<"Employee eid is : "<< e.eid << endl;

    
    
}