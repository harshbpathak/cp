#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin >> n;
    vector <int> price(n);
    for (int i=0;i<n;i++){
        cin>>price[i];
    }
    sort(price.begin(),price.end());
    cin >>q;
    vector<int> coins(q);
    for (int i=0;i<q;i++){
        cin >>coins[i];
    }
    for (int i=0 ; i<q;i++){
        int start=0, end=n-1;
        int ans=0;
        while (start<=end){
            int mid=(start+end)>>1;
            if (price[mid]<=coins[i]){
                ans=mid+1;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        cout << ans << endl;     
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}