//Reference : https://www.youtube.com/watch?v=RlpM5N-ttcU
#include<iostream>
using namespace std;

int main(){
    int n;
    long long total, invalid;
    cin>>n;
    for(long long i=1;i<=n;i++){
        total=((i*i)*((i*i)-1))/2;
        invalid=4*(i-1)*(i-2);
        cout<<total-invalid<<endl;
    }
    return 0;
}