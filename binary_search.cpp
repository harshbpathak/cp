#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0, 1, 2, 3, 4, 5, 8};
    int  n = nums.size();
    int target = 8;
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end) >> 1;
        if(nums[mid] < target){
            start = mid+1;
        } else if(nums[mid] > target){
            end = mid-1;
        } else{
            cout << mid;
            return 0;
        }
    }
}