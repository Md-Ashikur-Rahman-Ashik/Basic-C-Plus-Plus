#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if (x % 2 == 0)
    {
        /* code */
        cout << x << " is an even number";
    }
    else
    {
        cout << x << " is an odd number";
    }

    return 0;
}