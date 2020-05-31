#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int weekday[5];
        for(int i = 0 ; i < 5 ; i++)
        cin >> weekday[i];
        int x;
        cin >> x;
        
        int count = 0 ;
        for(int i = 0; i < 5 ; i++){
            count+= (weekday[i]*x);
        }

        if(count > 120){
            cout <<"Yes\n";
        }else{
            cout <<"No\n";
        }
    }
}