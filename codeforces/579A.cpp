#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int ans;
    int c=0;
    while (n>0){
        n=n & (n-1);
        c++;
    }
    cout << c;    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

}
