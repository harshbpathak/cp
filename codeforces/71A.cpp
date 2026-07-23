#include<bits/stdc++.h>
using namespace std;
void solve(){
    string test;
    string wd = "";
    cin>>test;
    int l=test.length();
    if (l<10) cout << test<<endl;
    else {
        char fr=test[0];
        char ls=test[l-1];
        cout <<fr<<l-2<<ls<<endl;
    }
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t>0){
        t--;
        solve();
    }
    return 0;
}