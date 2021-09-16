#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
    }
};

int main(){

     Solution sol;

    vector<int>aliceSizes={1,1};
    vector<int>bobSizes={2,2};
    
    vector<int>ans=sol.fairCandySwap(aliceSizes,bobSizes);
    for(auto it: ans){
        cout<<it<<" ";
    }

    return 0;
}