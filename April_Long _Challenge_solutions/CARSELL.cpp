#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 const unsigned int M = 1000000007; 
 ll max(ll a , ll b){
     return (a > b) ?  a : b;
 }
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0 ; i < n ; i++)
        cin>> arr[i];
        sort(arr, arr+n, greater<int>());

        ll sum = 0, count = 0  ;
        for(ll i = 0 ; i < n ; i++){
            sum+= (max(arr[i]-count , (long)0 ));
            sum%=M;
            count+=1;
        }
        cout << sum <<"\n";
    }
}