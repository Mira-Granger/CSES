#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int *arr=new int[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    int l=s.length();
    for(int i=0;i<l;i++){
        int ind=s[i]-'A';
        arr[ind]++;
    }
    int oddcount=0;
    string ans1="";
    string ans2="";
    string half="";
    string middle="";
    bool soln=true;
    for(int i=0;i<26;i++){
        char c=i+'A';
        if(arr[i]%2!=0){
            oddcount++;
            if(oddcount>1){
            soln=false;
            break;
        }
            middle=string(arr[i],c);
        }
        else{
            half=string(arr[i]/2,c);
            ans1=ans1+half;
            ans2=half+ans2; 
        }
    }
    if(!soln){
        cout<<"NO SOLUTION";
    }
    else{
        cout<<ans1+middle+ans2;
    }
    return 0;
}