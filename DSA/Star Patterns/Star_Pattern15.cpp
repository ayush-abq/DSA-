#include<iostream>
using namespace std;

int main(){
    int k;
for(int i=1;i<=7;i++){
    k=7-i;
    for(int j=1;j<=7;j++){
        if(j<=8-i){
            cout<<k<<" ";
            k--;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
// output
// 6 5 4 3 2 1 0
// 5 4 3 2 1 0
// 4 3 2 1 0
// 3 2 1 0
// 2 1 0
// 1 0
// 0
    return 0;
}