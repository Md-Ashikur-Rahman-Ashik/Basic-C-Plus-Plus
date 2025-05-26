#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    // if (num1 > num2)
    // {
    //     /* code */
    //     cout << num1 << " is greater than " << num2;
    // }
    // else
    // {
    //     cout << num2 << " is greater than " << num1;
    // }

    // cout << "The smaller number is " << min(num1, num2) << endl;
    // cout << "The maximum number is " << max(num1, num2) << endl;

    // int tmp = num1;
    // num1 = num2;
    // num2 = tmp;

    cout << "After swap - The first number is " << num1 << endl
         << "After swap - The second number is " << num2;

    return 0;
}