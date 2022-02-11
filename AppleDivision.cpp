//Concept: Power Set
//Reference: https://www.youtube.com/watch?v=b7AYbpM5YrE
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    long sum=0;
    long diff=LONG_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        sum+=x;
    }
    for(int num=1;num<(1<<n);num++){
        long subsum=0;
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                subsum+=arr[i];
            }
        }
        long inv=sum-subsum;
        if(abs(subsum-inv)<diff){
            diff=abs(subsum-inv);
        }        
    }
    cout<<diff;
    return 0;
}