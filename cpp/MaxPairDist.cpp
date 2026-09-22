#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    vector<int> prefix_min(n);
    vector<int> suffix_max(n);
    prefix_min[0]=arr[0];
    for (int i=0;i<n;i++){
        prefix_min[i]=min(prefix_min[i-1],arr[i]);
    }
    suffix_max[n-1]=arr[n-1];
    for (int i=n-2;i>=0;i--){
        suffix_max[i]=max(suffix_max[i+1],arr[i]);
    }
    int m=0,j=0;
    int max_dist=0;
    while (m<=n && j<=n){
        if (suffix_max[j]>=prefix_min[m]){
            int max_temp=max(j-m,max_dist);
            if (max_temp>max_dist) max_dist=max_temp;
            j++;
        }
        else if (suffix_max[j]<prefix_min[m]){
            m++;
        }
    }
    cout<<max_dist;
}
