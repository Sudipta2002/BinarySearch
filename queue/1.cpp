#include<bits/stdc++.h>
using namespace std;

// int newf(int a,int b,int p,int q){
//     if(a==p && b==q){
//         return 0;
//     }
//     if(((a+b)%2==0 && (p+q)%2!=0)||((a+b)%2!=0 && (p+q)%2==0)){
//         return 1;
//     }
//     if((a+b)%2==0 && (p+q)%2==0){
//         return 2;
//     }
//     return -1;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b==q){
            cout<<0<<endl;
        }else if(((a+b)%2==0 && (p+q)%2!=0)||((a+b)%2!=0 && (p+q)%2==0)){
           cout<<1<<endl;
        }else if((a+b)%2==0 && (p+q)%2==0){
            cout<<2<<endl;
        }
        // cout<<newf(a,b,p,q)<<endl;
    }
    
    return 0;
}