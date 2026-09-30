#include <iostream>
#define girls 3
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][girls];
    int true_count = 0;
    int tot_count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < girls; j++)
        {

            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                true_count += 1;
            }

            if (j == girls - 1)
            {
                if (true_count >= 2)
                {
                    tot_count += 1;
                }
                true_count = 0;
            }
        }
    }

    cout << tot_count << endl;
}