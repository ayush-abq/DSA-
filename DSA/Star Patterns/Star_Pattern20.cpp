#include<iostream>
using namespace std;

int main(){
    char k;
for(int i=1;i<=4;i++){
    k='A';
    for(int j=1;j<=7;j++){
        if(j>=5-i && j<=3+i){
            cout<<k;
            j<4?k++:k--;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
// Output
//    A
//   ABA
//  ABCBA
// ABCDCBA
    return 0;
}