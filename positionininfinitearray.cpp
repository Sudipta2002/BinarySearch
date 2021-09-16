#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

        int returnAns(vector<int>& nums, int target,int start,int end){
            while(start<=end){
                int mid=(start+end)/2;

                if(target<nums[mid]){
                    end=mid-1;
                }else if(target>nums[mid]){
                    start=mid+1;
                }else{
                    return mid;
                }
            }
            return -1;
        }
    
public:
    int findPos(vector<int>& nums, int target) {
        
        int start=0;
        int end=1;
        while(nums[end]<target){
            int temp=end+1;

            end=end+2*(end-start+1);
            start=temp;
        }
        return returnAns(nums,target,start,end);
        
    }
};

int main(){

    Solution sol;

    vector<int>v={3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170};
    int target=10;

    int ans=sol.findPos(v,target);
    cout<<ans;
    
    return 0;
}