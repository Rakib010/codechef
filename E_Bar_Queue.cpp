#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B')
            {
                b++;
            }
            else
            {
                g++;
            }
            if (2 * g < b)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}