#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool appBinary(vector<int>& nums,int target,int start,int end){
        while(start<=end){
            int mid=(start+end)/2;

            if(target<nums[mid]){
                end=mid-1;
            }else if(target>nums[mid]){
                start=mid+1;
            }else{
                return 1;
            }
        }
        return 0;
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
        if(mid>start && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(arr[start]==arr[mid] &&arr[end]==arr[mid] ){
            if(arr[start]>arr[start+1]){
                return start;
            }
            start++;
            if(arr[end]<arr[end-1]){
                return end-1;
            }
            end--;
        }else if(arr[start]<arr[mid] || arr[start]==arr[mid] &&arr[mid]>arr[end]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
public:
    bool search(vector<int>& nums, int target) {
        int pivot=findPivot(nums);
        int start=0;
        int end=nums.size()-1;

        if(appBinary(nums,target,start,pivot)==false){
            return(appBinary(nums,target,pivot+1,end));
        }else{
            return appBinary(nums,target,start,pivot);
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int>arr={2,5,6,0,0,1,2};
    int target=0;
    // sol.search(arr,target)
    if(sol.search(arr,target)==1)
    {
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    // cout<<ans<<endl;
    return 0;
}