#include<iostream>
using namespace std;

int main(){
    char k;
    for(int i=1;i<=4;i++){
        k='1';
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                cout<<k;
                k++;
                if(j==4){
                    k='A';
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
// Output
//    1
//   12A
//  123AB
// 1234ABC
    return 0;
}