#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin >> n;
    set<char> l;
    string cases;
    cin>> cases;
    int ans=0;
    for (int i =0;i<n;i++){
        if (l.find(cases[i])!=l.end()) ans++;
        else{
            ans+=2;
            l.insert(cases[i]);
        }
        
    }
    cout << ans <<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0){
        t--;
        solve();
    }
}