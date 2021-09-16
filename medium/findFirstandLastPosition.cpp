#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binary(vector<int>& arr,int target,bool descision){
        int start=0;
        int end=arr.size()-1;
        int ans;
        while (start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]<target){
                start=mid+1;
            }else if(arr[mid]>target){
                end=mid-1;
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
        vector<int>arr={-1,-1};

        arr[0]=binary(nums,target,true);
        arr[1]=binary(nums,target,false);

        return arr;
    }
};

int main(){
    Solution sol;

    vector<int>nums={5,7,7,7,7,8,8,10};
    int target=7;
    vector<int>ans=sol.searchRange(nums,target);

    for(auto it: ans){
        cout<<it<<" ";

    }

    return 0;
}