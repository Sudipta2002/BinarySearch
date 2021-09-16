#include<bits/stdc++.h>
using namespace std;

class Solution {
    int index(vector<int>nums,int target,bool descision){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(target<nums[mid]){
                end=mid-1;
            }else if(target>nums[mid]){
                start=mid+1;
            }else{
                ans=mid;
                if(descision){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};

        ans[0]=index(nums,target,true);
        ans[1]=index(nums,target,false);

        return ans;
    }
};

int main(){

    Solution sol;

    vector<int>v={5,7,7,7,7,8,8,10};
    int target=7;

    vector<int>v1=sol.searchRange(v,target);
    for(auto it:v1){
        cout<<it<<" ";
    }
    return 0;
}