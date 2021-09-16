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
    int findInd(vector<int>& arr,int target,int elevated){
        
        if(appBinary(arr,target,0,elevated)==-1){
            return appBinary(arr,target,elevated,arr.size()-1);
        }else{
            return appBinary(arr,target,0,elevated);
        }
        return -1;
    }
public:
    int findInMountainArray(vector<int>& arr,int target) {
        
        int start=0;
        int end=arr.size()-1;


        while(start<=end){
            int mid=(start+end)/2;
            
            if(start==end){
                return findInd(arr,target,mid);
            }
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }else if(arr[mid]>arr[mid+1]){
                end=mid;
            }
               
        }
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int>arr={1,2,3,4,5,3,2,1};
    int target=2;
    int ans=sol.findInMountainArray(arr,target);
    cout<<ans<<endl;
    return 0;
}