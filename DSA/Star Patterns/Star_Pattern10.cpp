#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
        char A=65;
        for(int j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                cout<<A;
                j<4?A++:A--;
            }
            else{
                cout<<" ";
                if(j==4){
                     A--;
                }
            }
        }
        cout<<endl;
    }
// Output
// ABCDCBA
// ABC CBA
// AB   BA
// A     A
    return 0;
}