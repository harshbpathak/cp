#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m,a;
    cin>>n>>m>>a;
    long long L= 1LL*((n+a-1)/a*(m+a-1)/a);
    cout << L;
}
 
int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}