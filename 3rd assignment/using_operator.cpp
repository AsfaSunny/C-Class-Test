// C++ program to swap two variable using + and -

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10, y = 11;

    cout << "Before swapping x = " << x << " , y = " << y << endl;

    y = x + y;
    x = y - x;
    y = y - x;

    cout << "After swapping x = " << x << " , y = " << y << endl;
    return 0;
}
