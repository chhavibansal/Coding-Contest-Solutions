#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if( n == 1)
        cout << 1 ;
        else cout << (n/2);
        cout <<endl;
        ll i = 1;
        if( i <= 3){
            cout << min(n, (ll)3) <<" ";
            if ( n == 1 )cout <<1 ;
            else if( n == 2 ) cout << "1 2";
            else cout <<"1 2 3";
            cout <<"\n";
        }
        for(ll i = 4 ; i <= n ; i+=2){
            if( i+1 <= n )
            cout << 2 << " "<< i <<" "<<i+1;
            else 
            cout <<1 <<" "<< i ;
            cout <<"\n";
        }
    }
}