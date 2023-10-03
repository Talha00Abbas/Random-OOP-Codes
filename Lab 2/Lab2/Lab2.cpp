#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //2x5 + 3x4-x3 - 2x2 + 7x - 6
    int x = 0;
    cout << "Enter Value for X" << endl;
    cin >> x;
    int result = 0;
    result = (2 * pow(x, 5) + 3 * pow(x, 4) - pow(x, 3) - 2 * pow(x, 2) + 7 * x - 6);
    cout << "The result of the equation 2x5 + 3x4-x3 - 2x2 + 7x - 6 is " << result << endl;
    cout << "Final Equation is 2(" << x << ")^5 + 3(" << x << ")^4 - (" << x << ")^3 - 2(" << x << ")^2 + 7(" << x << ") - 6" << endl;
}


/* int swCase = 0;

 cout << "Greetings My Creator" << endl;
 cout << "Which Program you want to see" << endl;
 cin >> swCase;

 switch (swCase)
 {
 case 1:
     task1();
     break;
 case 2:
     task2();
     break;
 case 3:
     task3();
     break;
 case 4:
     task4();
     break;

 default:
     cout << "It doesn't exist" << endl << endl;
     break;
 }*/