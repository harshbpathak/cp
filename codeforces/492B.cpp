#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,l;
    cin >>n>>l;
    vector<int> lat(n);
    for (int i=0;i<n;i++){
        cin>>lat[i];
    }
    sort(lat.begin(),lat.end());
    double max_d=lat[0];
    for (int i=1;i<n;i++){
        double diff=(lat[i]-lat[i-1])/2.0;
        max_d = max(max_d, diff);
    }
    int last_latern=lat[n-1];
    double last_diff=(l-last_latern);
    if (last_diff>max_d) max_d=last_diff;
    
    cout << fixed << setprecision(20)<< max_d;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}