#include<iostream>
using namespace std;
#define mod 1000000007

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans;
    return 0;
}