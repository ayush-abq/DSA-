#include<iostream>
using namespace std;

int main(){
    int n;
    long int sum=0;
    int ar[5];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(int i=1;i<=n;i++){
        sum += ar[i];
    }
    cout<<sum;
}