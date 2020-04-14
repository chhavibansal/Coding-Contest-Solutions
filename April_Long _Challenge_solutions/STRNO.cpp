#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    vector<int> p(100005);
    vector<int> primeFactor;
    p[0] = p[1] = 0;
    for (ll i = 2; i < 100005; i++)
        p[i] = 1;
    for (ll i = 4; i < 100005; i += 2)
        p[i] = 0;
    primeFactor.push_back(2);
    for (ll i = 3; i < 100005; i += 2)
    {
        if (p[i])
        {
            primeFactor.push_back(i);
            for (ll j = i * i; j < 100005; j += i)
                p[j] = 0;
        }
    }
    while (t--)
    {

        ll x, k;
        cin >> x >> k;
        if (k == 0)
        {
            if (x == 1)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
            continue;
        }
        ll count = 0;
        for (ll element : primeFactor)
        {
            while (x % element == 0)
            {
                x /= element;
                count += 1;
            }
        }
        if (x > 1)
            count += 1;
        if (count == k)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}