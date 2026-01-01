#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int minSlices = 10 * n;
        int maxSlices = 12 * n;

        if (k >= minSlices && k <= maxSlices)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
