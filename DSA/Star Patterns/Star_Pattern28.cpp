#include<iostream>
using namespace std;

int main(){
    char k=65;
    for(int i=1;i<=4;i++){
        k=64+i;
        for(int j=1;j<=4;j++){
            if(j<=i){
                cout<<k;
                k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
// Ouput
// A
// BA
// CBA
// DCBA
    return 0;
}