#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> set1,set2;
    long long sum=(n*(n+1))/2;
    if(sum%2!=0){
        cout<<"NO";
    }
    else{
        long long target=sum/2;
        long long cur=0,i=1;
        long long start=1, end=n;
        while(cur<target){
            if(i%2==0){
                cur+=start;
                set1.push_back(start);
                start++;
            }
            else{
                cur+=end;
                set1.push_back(end);
                end--;
            }
            i++;
        }
        for(long long j=start;j<=end;j++){
            set2.push_back(j);
        }
        //set 1
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(long long j=0;j<set1.size();j++){
            cout<<set1.at(j)<<" ";
        }
        cout<<endl<<set2.size()<<endl;
        for(long long j=0;j<set2.size();j++){
            cout<<set2.at(j)<<" ";
        }
    }
    return 0;
}