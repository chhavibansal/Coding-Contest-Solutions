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
        int prev = 0, f = 0;
        int x = 0, dis = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
            {
                if (prev != 0 and d < 6)
                {
                    f = 1;
                }
                // cout << d;
                d = 0;
                prev = x;
            }
            d += 1;
        }
        if (f == 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}