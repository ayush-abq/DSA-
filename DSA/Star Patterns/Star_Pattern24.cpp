#include<iostream>
using namespace std;

int main(){
    int k;
    for(int i=1;i<=6;i++){
        k=1;
        for(int j=1;j<=6;j++){
            if(j<=i){
                cout<<k;
                k=1-k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
// output
// 1
// 10
// 101
// 1010
// 10101
// 101010
    return 0;
}