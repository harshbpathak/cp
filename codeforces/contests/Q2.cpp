#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n,k;
    cin>>n>>k;
    string st;
    if (k==(n-1)){
        cout << "-1";
    }
    int count_one=0;
    int count_zero=0;
    int same_count=0;
    for (int num=0;num<pow(2,n);num++){
        while (num>0){
            st+=(n%2)? '1':'0';
            num/=2;
        }
        reverse(st.begin(),st.end());
        for (int i=0;i<n;i++){
            if (st[i]=='1'){
                count_one+=1;
            }
            if (st[i]=='0'){
                count_zero+=1;
            }
            if (st[i]==st[i+1]){
                same_count+=1;
            }
        }
        if ((abs(count_one-count_zero)==1) && same_count==k){
                cout<<st;
                break;
            }
    }  
    
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}