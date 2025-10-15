// class Solution {
// public:
//     void whichWeekDay(int day) {
//         switch(day)
//         {
//             case 1: cout << "Monday";
//               break;
//             case 2: cout << "Tuesday";
//               break;
//             case 3: cout << "Wednesday";
//               break;
//             case 4: cout << "Thursday";
//               break;
//             case 5: cout << "Friday";
//               break;
//             case 6: cout << "Saturday";
//               break;
//             case 7: cout << "Sunday";
//               break;
//             default: cout << "Invalid";
//         }

//     }
// };

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  switch(n)
  {
    case 1: cout << "one";
      break;
    case 2: cout << "two";
      break;
    case 3: cout << "three";
      break;
    case 4: cout << "four";
      break;
    case 5: cout << "five";
      break;
    case 6: cout << "six";
      break;
    case 7: cout << "seven";
      break;
    case 8: cout << "eight";
      break;
    case 9: cout << "nine";
      break;
    default: cout << "Greater than nine";
  }
}