#include <iostream>
using namespace std;

int main()
{
    int a , b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << "Enter the value of c: " << endl;

    if(a > b && a > c)
    {
        cout << "a is the largest number" << endl;

    }
    else if(b > a && b > c)
    {
        cout << "b is the largest number" << endl;

    }
    else if (c > a && c > b)
    {
        cout << "c is the largest number" << endl;
    }
    else
    {
        cout << "There is no absolute largest number";

    }
}