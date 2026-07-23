#include <bits/stdc++.h>
using namespace std;
 
int solve(){
    vector<int> num(3);
    int con=0;
    for (int i=0;i<3;i++){
        cin>>num[i];
    }
    for (int i=0;i<num.size();i++){
        if (num[i]==1) con++;
    }
    return con;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >>t;
    int ans=0;
    while(t>0){
        t--;
        int solved=solve();
        if (solved>=2) ans++;
    }
    cout <<ans;
}