#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if( a[i] < m) st.insert(a[i]);

        }
        if(st.size() != m-1) cout <<-1 <<endl;
        else{
            int cnt = n ;
            for(int  x: a) {
                if( x == m) cnt-=1;
            }
            cout << cnt <<"\n";
        }
    }
}