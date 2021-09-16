#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]<(mid+1)){
                end=mid-1;
            }else if(nums[mid]==(mid+1)){
                start=mid+1;
            }
        }
        return nums[start];
    }
};


int main(){
    Solution sol;

    vector<int>nums={1,2,2,3,4};

    int ans=sol.findDuplicate(nums);

    cout<<ans<<endl;

    return 0;
}