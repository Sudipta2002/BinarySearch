#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start=0;
        int end=arr.size()-1;


        while(start<=end){
            int mid=(start+end)/2;
            if(start==end){
                return start;
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
    vector<int>arr={1,2,3,5,6,8,3,2};

    int ans=sol.peakIndexInMountainArray(arr);
    cout<<ans<<endl;
    return 0;
}