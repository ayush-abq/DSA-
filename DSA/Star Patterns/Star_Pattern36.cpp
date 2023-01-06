#include<iostream>
using namespace std;

int main(){
    int row,p, k;
    k=1;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        p=k;
        for(int j=1;j<=i;j++){
            cout<<p;
            p=p-(row-i+j);
        }
        cout<<endl;
        k=k+1+row-i;
    }
// Output
// 1
// 62
// 1073
// 131184
// 15141295
    return 0;
}