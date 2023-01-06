#include<iostream>
using namespace std;
int main(){
    int n, plus=0, minus=0, zero=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            plus++;
        }
        if(arr[i]<0){
            minus++;
        }
        if(arr[i]==0){
            zero++;
        }
    }
    // float pratio, mratio, zratio;
    float a,b,c;
    a=(float)plus/n;
    b=(float)minus/n;
    c=(float)zero/n;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
