#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binary(vector<int>& arr,int target){
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(target<arr[mid]){
                end=mid-1;
            }else if(target>arr[mid]){
                start=mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
public:
    int predictPos(vector<int>& arr,int target){
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(target<arr[mid]){
                end=mid-1;
            }else if(target>arr[mid]){
                start=mid+1;
            }
        }
        return start;
    }
    

public:
    int searchInsert(vector<int>& nums, int target) {
        if(binary(nums,target)==-1){
            return predictPos(nums,target);
        }

        return binary(nums,target);
    }
};


int main(){
    Solution sol;

    vector<int>arr={1,3,5,6};
    int target=7;
    cout<<sol.searchInsert(arr,target);

    return 0;
}