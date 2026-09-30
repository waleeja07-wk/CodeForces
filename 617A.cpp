#include <iostream>
using namespace std;

int main()
{
    int x;
    int res;

    cin >> x;

    if (x >= 0 && x <= 1000000)
    {
        res = x / 5;
        if (x % 5 == 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << res + 1 << endl;
        }
    }
}