#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-2;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==nums[mid^1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return nums[start];
    }
};
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int start=0;
//         int end=nums.size()-2;
//         int mid;
//         while(start<=end){
//             mid=start+(end-start)/2;
//             if((mid%2==1 && nums[mid]==nums[mid-1] )
//                ||
//                (nums[mid]==nums[mid+1]&&mid%2==0)){
//                 start=mid+1;
               
//             }else{
//                 end=mid-1;
//             }
//         }
//         return nums[start];
//     }
// };

int main(){
    Solution sol;

    vector<int>nums={1,1,2,3,3,4,4,8,8};
 
    int ans=sol.singleNonDuplicate(nums);

   cout<<ans<<endl;

    return 0;
}