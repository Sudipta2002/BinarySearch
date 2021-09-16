#include<bits/stdc++.h>
using namespace std;
class Solution {
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
    int findMin(vector<int>& nums) {
        int pivot=findPivot(nums);
        return nums[pivot+1];
    }
};
int main(){
    Solution sol;
    vector<int>arr={3,4,5,1,2};
    
    int ans=sol.findMin(arr);
    cout<<ans<<endl;
    return 0;
}