#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long a,b;
    cin>>t;
    while(t>0){
        t--;
        cin>>a>>b;
        if(b>a){
            swap(a,b);
        }
        if(((a+b)%3!=0) || (a>2*b)){
            cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        }
    }
    return 0;
}