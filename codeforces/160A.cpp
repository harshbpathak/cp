#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> coins(n);
    int sum=0;
    int ans=0;
    int m=0;
    int sub;
    for (int i=0;i<n;i++){
        cin >>coins[i];
    }
    sort(coins.begin(),coins.end(),[](int a, int b){
        return a>b;
    });
    
    for (int i=0; i<n;i++){
        sum+=coins[i];
    }
    for (int i=0;i<n;i++){
        m+=coins[i];
        if (m>sum/2){
            ans++;
            break;
        }
        else {
            ans++;
        }
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
