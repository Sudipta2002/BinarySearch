#include<bits/stdc++.h>
using namespace std;
int ceiling(int arr[],int n,int target){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(target<arr[mid]){
            end=mid-1;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            return mid;
        }
    }
    return arr[start];
}
int floor(int arr[],int n,int target){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(target<arr[mid]){
            end=mid-1;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            return mid;
        }
    }
    return arr[end];
}
int main(){

    int arr[]={2,3,4,9,14,16,18};
    int target=5;

    int ans=ceiling(arr,6,target);
    int ans1=floor(arr,6,target);
    cout<<ans<<endl;
    return 0;
}