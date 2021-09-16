#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long int start=1;
        long long int end=x;
        int ans;
        while(start<=end){
            long long int mid=start+(end-start)/2;

            if(mid*mid>x){
                end=mid-1;
            }else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }else{
                return mid;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int x=8;
    cout<<sol.mySqrt(x);
    return 0;
}