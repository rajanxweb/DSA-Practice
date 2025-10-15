// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int marks ;
//     cin >> marks;

//     if (marks >= 90)
//     {
//         cout << "Grade A";
//     }
//     else if (marks >= 70)
//     {
//         cout << "Grade B";
//     }
//     else if (marks >= 50)
//     {
//         cout << "Grade C";
//     }
//     else if (marks >= 35)
//     {
//         cout << "Grade D";
//     }
//     else
//     {
//         cout << "Fail";
//     }
// }


// 2nd problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if ( age < 18)
    {
        cout << "Not eligible for job";
    }
    else if(age >=18)
    {
        if(age >= 55 && age <= 57)
        {
            cout << "You are eligible for job , but retirement soon";
        }
        else if(age > 57)
        {
            cout << "Retirement time";
        }
        else{
            cout << "Eligible for job";
        }

    }
}