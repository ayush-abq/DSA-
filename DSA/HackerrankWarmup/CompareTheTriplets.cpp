#include<iostream>
using namespace std;

int main(){
    int a=0, b=0, Arr[3], Brr[3], result[2]={0,0};
    for(int i=1;i<=3;i++){
        cin>>Arr[i];
    }
    for(int i=1;i<=3;i++){
        cin>>Brr[i];
    }
    for(int i=1;i<=3;i++){
        if(Arr[i]>Brr[i]){
            a++;
        }
        if(Arr[i]<Brr[i]){
            b++;
        }
    }
    // result[0]=a;
    // result[1]=b;
    cout<<a<<" "<<b;
    

}