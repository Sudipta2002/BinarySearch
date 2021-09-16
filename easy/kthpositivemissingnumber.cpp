#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0;
        int end=arr.size()-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]-mid-1>k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start+k;
    }
};

int main(){
    Solution sol;

    vector<int>arr={2,3,4,7,11};
    int k=5;
    
    cout<<sol.findKthPositive(arr,k);

    return 0;
}