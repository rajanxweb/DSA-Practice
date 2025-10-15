#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;


    if(marks > 100)
    {
        cout << "Invalid marks" << endl;
    }
    else if(marks > 90)
    {
        cout << "Grade A" << endl;
    }
    else if(marks <= 89 && marks >= 75)
    {
        cout << "Grade B" << endl;
    }
    else if(marks < 75 && marks >= 50)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}