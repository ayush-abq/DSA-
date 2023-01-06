#include<iostream>
using namespace std;
 
 int main(){
    int n,sumleft=0, sumright=0, absdiff;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
               sumleft += arr[i][j]; 
            }
            if(i+j==n-1){
                sumright += arr[i][j];
            }
        }
    }
    if(sumleft>sumright){
        absdiff=sumleft-sumright;
        cout<<absdiff;
    }
    else{
        absdiff=sumright-sumleft;
        cout<<absdiff;
    }
 }