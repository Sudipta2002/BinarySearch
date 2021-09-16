#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appBinary(vector<int>& nums,int target,int start,int end){
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
int findPivot(vector<int>arr){
    int start=0;
    int end=arr.size()-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(mid<end && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(arr[start]>arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
public:
    int search(vector<int>& nums, int target) {
        int pivot=findPivot(nums);
        int start=0;
        int end=nums.size()-1;

        if(appBinary(nums,target,start,pivot)==-1){
            return(appBinary(nums,target,pivot+1,end));
        }else{
            return appBinary(nums,target,start,pivot);
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int>arr={4,5,6,7,0,1,2};
    int target=3;
    int ans=sol.search(arr,target);
    cout<<ans<<endl;
    return 0;
}