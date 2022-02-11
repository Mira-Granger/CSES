#include<bits/stdc++.h>
using namespace std;


vector<string> gray(int n, vector<string> seed){
    if(seed[0].size()>=n) return seed;
    vector<string> ans;
    int l=seed.size();
    for(int i=0;i<l;i++){
        string c=seed[i];
        ans.push_back("0"+c);
    }
    for(int i=l-1;i>=0;i--){
        string c=seed[i];
        ans.push_back("1"+c);
    }
    return(gray(n,ans));
}

int main(){
    int n;
    cin>>n;
    vector<string> seed;
    seed.push_back("0");
    seed.push_back("1");
    vector<string> ans;
    ans=gray(n,seed);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}