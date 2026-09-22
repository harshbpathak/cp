#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string> goals(n);
    for (int i=0;i<n;i++){
        cin>> goals[i];
    }
    string T1=goals[0];
    string T2="";
    int s1=0;
    int s2=0;
    for (int i=0;i<n;i++){
        if (goals[i]==T1){
            s1++;
        }
        else{
            s2++;
            T2=goals[i];
        }
    }
    if (s1>s2){
        cout << T1 <<endl;
    }else{
        cout <<T2 <<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}