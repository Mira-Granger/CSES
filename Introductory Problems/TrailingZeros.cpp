//Reference : https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count=0;
    for(long long i=5;n/i>0;i*=5){
        count+=n/i;
    }
    cout<<count;
    return 0;
}