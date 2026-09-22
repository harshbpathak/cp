#include <bits/stdc++.h>
using namespace std;

void solve(){
    int max;
    cin >> max;
    vector<int> round1(2);
    vector<int> round2(2);
    int alice=0;
    int bob=0;
    for (int i=0;i<2;i++){
        cin>>round1[i];
    }
    alice+=round1[0];
    bob+=round1[1];
    for (int i=0;i<2;i++){
        cin>>round2[i];
    }
    alice+=round2[0];
    bob+=round2[1];
    
    if (alice==bob){
        if (round1[0]>round1[1] && round2[0]>round2[1]){
            cout << "NO" << endl;
        }
        else {
            cout <<"YES"<< endl;
        }
    }
    else if ((bob+max)>alice){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>> t;
    while(t>0){
        t--;
        solve();
    }
}