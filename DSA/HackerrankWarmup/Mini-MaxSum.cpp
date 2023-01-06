#include<iostream>
using namespace std;

int main(){
    long int max=0, min=0, temp;
    long int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    min = a[1]+a[2]+a[3]+a[4];
    max = a[2]+a[3]+a[4]+a[5];
    cout<<min<<" "<<max;
    return 0;
}