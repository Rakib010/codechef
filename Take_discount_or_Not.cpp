#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        long long originalCost = 0;
        long long discountedCost = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            originalCost += a;

            discountedCost += max(a - y, 0);
        }

        discountedCost += x;

        if (discountedCost < originalCost)
            cout << "COUPON\n";
        else
            cout << "NO COUPON\n";
    }

    return 0;
}
