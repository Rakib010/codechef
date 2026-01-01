#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool holdingClose = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= d)
            {
                if (!holdingClose)
                {
                    cnt++;
                    holdingClose = true;
                }
            }
            else
            {
                if (holdingClose)
                {
                    cnt++;
                    holdingClose = false;
                }
            }
        }
        cout << cnt;
    }
}
