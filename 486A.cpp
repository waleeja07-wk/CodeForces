#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long fxn = 0;

    cin >> n;

    if (n >= 1 && n <= 10000000000000000)
    {
        if (n % 2 == 0)
        {
            fxn = n / 2;
        }

        else
        {
            fxn = -(n + 2) / 2;
        }

        cout << fxn << endl;
    }
}