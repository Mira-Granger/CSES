#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int global=1;
    int local=1;
    int n=str.length();
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            local++;
            if(local>global){
                global=local;
            }
        }
        else{
                local=1;
        }
    }
    cout<<global;
    return 0;
}