#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    int count = 0;
    cin >> n;
    cin >> k;

    int score[n];

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (score[k - 1] > 0)
        {
            if (score[i] >= score[k - 1])
            {
                count += 1;
            }
        }
    }

    cout << count << endl;
}