#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flg = 1;
        }
    }
    if (flg == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
