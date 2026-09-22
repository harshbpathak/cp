#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    if(n==1){
        if(k==0){
            if(nums[0] == 1) cout << "-1";
            else cout << 1;
        }
        else cout << nums[0];
    }
    else{
        sort(nums.begin(),nums.end());
        if(k==0){
            if(nums[0] == 1) cout << "-1";
            else cout << nums[0] - 1;
        }
        else{
            int start = nums[k-1];
            int end = nums[k];
            if(start == end) cout << "-1";
            else cout << start;
        }
       
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}