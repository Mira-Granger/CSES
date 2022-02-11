#include<iostream>
using namespace std;

int main(){
    long long t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        long long r=0,c=0;
        cin>>r>>c;
        if(r==c){
            cout<<((r*r)-r+1)<<endl;
        }
        else if(c>r){
            if(c%2==0){
                cout<<(((c-1)*(c-1))+r)<<endl;
            }
            else{
                cout<<((c*c)-r+1)<<endl;
            }
        }
        else{
            if(r%2==0){
                cout<<((r*r)-c+1)<<endl;
            }
            else{
                cout<<(((r-1)*(r-1))+c)<<endl;
            }
        }
    }
    return 0;
}