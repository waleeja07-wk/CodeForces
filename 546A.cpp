#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    int count = 0;
    cin >> k;
    cin >> n;
    cin >> w;

    for (int i = 1; i <= w; i++)
    {
        count += (i * k);
    }

    if (count <= n)
    {
        cout << "0";
    }
    else
    {
        cout << count - n;
    }
}