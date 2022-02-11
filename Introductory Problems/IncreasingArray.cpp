#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int *arr=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int sum=0;
    for(long long int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sum+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<sum;
}