#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    sort(all(s));
    do{
        ans.push_back(s);
    }while(next_permutation(all(s)));
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}