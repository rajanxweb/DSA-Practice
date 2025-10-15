#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if(num % 3 == 0 && num % 5 == 0)
    {
        cout << "Divisible by both" << endl;
    }
    else if(num % 3 ==0)
    {
        cout << "Divisible by 3 "<<endl;

    }
    else if(num % 5 == 0)
    {
        cout << "Divisible by 5" << endl;
    }
    else
    {
        cout << "neither divisible by 3 nor by 5";

    }

}

