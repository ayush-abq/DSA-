#include<iostream>
using namespace std;

int main(){
    char k;;
for(int i=1;i<=4;i++){
    k='A';
    for(int j=1;j<=8;j++){
        if(j>=5-i && j<=4+i){
            if(j==5){
                k='1';
            }
            cout<<k;
            k++;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
// Ouput
//    A1
//   AB12
//  ABC123
// ABCD1234
    return 0;
}