#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    x % 2 == 0 ? cout << x << " is an even number" : cout << x << " is an odd number";

    return 0;
}