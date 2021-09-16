#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sumOfn(int n){
            return n*(n+1)/2;
        }
public:
    int arrangeCoins(int n) {
        int start=0;
        int end=n;
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(sumOfn(mid)>n){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n=8;
    cout<<sol.arrangeCoins(n)<<endl;

    return 0;
}