#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int>store;
        
        int start=0;
        int end=numbers.size()-1;
        
        while(start<end){
            int mid=(start+end)/2;
            
            if((numbers[start]+numbers[end])==target){
                
                return{start,end};
            }else if((numbers[start]+numbers[end])>target){
                end--;
            }else if((numbers[start]+numbers[end])<target){
                start++;
            }
            
        }
        return {};
    }
};

int main(){

    
    Solution sol;
    vector<int>arr={3,24,50,79,88,150,345};
    int target=200;
    vector<int>ans=sol.twoSum(arr,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}