#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int z = 0 , o = 0;
        for(char x : s){
            if((x-'0') == 0  )
                o+=1;
            else 
                z+=1;
        }
        int val = min(o , z);
        if(val%2 == 0 ){ //even Alice will loose
            cout <<"NET";
        }else cout <<"DA"; //win 
        cout <<"\n";
    }
}