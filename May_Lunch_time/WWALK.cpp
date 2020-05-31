#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n ;
        cin >> n ;
        int alice[n], bob[n];
        for(int i = 0 ; i < n ; i++)
        cin >> alice[i];
        for(int i = 0 ; i < n ; i++)
        cin >> bob[i];


        ll count= 0 , disa = 0 , disb = 0 ;
        for(int i  = 0 ; i < n ; i++){
            if(disa == disb and alice[i] == bob[i] ){
                count+= alice[i];
            }
            disa += alice[i];
            disb+= bob[i];
        }
        cout << count <<"\n";
    }
}