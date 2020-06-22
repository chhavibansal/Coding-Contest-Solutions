#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b, q;
        cin >> n >> b >> q;
        int previous = -1 , x, ans = 0 ;
        while(q--){
            cin  >> x;
            int now = x/b;
            if(previous != now ){
                previous = now;
                ans+=1;
            }
        }
        cout << ans <<"\n";
    }
}