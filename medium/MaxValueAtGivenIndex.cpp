#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int SumofN(int N){
            int ans=(N*(N+1))/2;
            return ans;
        }
public:
    int maxValue(int n, int index, int maxSum) {
        long r=n-index-1;
        long l=index;

        long int start=1;
        long int end=maxSum;
        long int ans;
        while(start<=end){
            long int mid=start+(end-start)/2;
            long sum=mid;
            long rs=0;//sum on right
            long ls=0;//sum on left
            long m=mid-1;

            if(r<=m){
                rs=SumofN(m)-SumofN(m-r);
            }else{
                rs=SumofN(m)+ (r-m)*1;
            }
            if(l<=m){
                ls=SumofN(m)-SumofN(m-l);
            }else{
                ls=SumofN(m)+ (l-m)*1;
            }
            sum+=ls+rs;

            if(sum<=maxSum){
                ans=mid;
                start=mid+1;

            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;

    int n=4;
    int index=2;
    int maxSum=6;


    int ans=sol.maxValue(n,index,maxSum);

    cout<<ans<<endl;

    return 0;
}