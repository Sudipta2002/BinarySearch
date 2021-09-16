#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(),piles.end());
        int maxiPile=INT_MIN;
        for(auto pile:piles){
            maxiPile=max(maxiPile,pile);
        }
        if(piles.size()==h){
            return maxiPile;
        }
        int start=1;
        int end=maxiPile;
        int ans=0;
        while(start<=end){
            int time=0;
            int mid=start+(end-start)/2;
            for(int i=0;i<piles.size();i++){ 
                time=time+(piles[i]+mid-1)/mid;
            } 
            if(time<=h){
                
                ans=mid;
                
                end=mid-1;
            }else if(time>h){
                start=mid+1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int>arr={3,6,7,11};
    int h=8;
    int ans=sol.minEatingSpeed(arr,h);
    cout<<ans<<endl;
    return 0;
}