#include<iostream>
using namespace std;

void hanoi(int n, int left, int middle, int right){
    if(n==1){
        cout<<left<<" "<<right<<endl;
        return;
    }
    hanoi(n-1,left,right,middle);
    hanoi(1,left,middle,right);
    hanoi(n-1,middle,left,right);
}

int main(){
    int n;
    cin>>n;
    int left=1, middle=2, right=3;
    long count=1;
    int init=1;
    while(init<n){
        count=(count*2)+1;
        init++;
    }
    cout<<count<<endl;
    hanoi(n,left,middle,right);
    return 0;
}