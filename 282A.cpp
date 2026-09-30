#include <iostream>
using namespace std;

int main()
{
    int X = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string statement;
        cin >> statement;
        if (statement == "X++" || statement == "++X")
        {
            X += 1;
        }
        else if (statement == "X--" || statement == "--X")
        {
            X -= 1;
        }
    }
    cout << X << endl;
}