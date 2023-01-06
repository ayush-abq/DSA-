#include<iostream>
using namespace std;

int main(){
    char alpha;
for(int i=1;i<=4;i++){
    char alpha='A';
    for(int j=1;j<=7;j++){
        if(j<=5-i || j>=3+i ){
            cout<<alpha;
            
        }
        else{
            cout<<" ";
        }
        alpha++;
    }
    cout<<endl;
}
// Output
// ABCDEFG
// ABC EFG
// AB   FG
// A     G
    return 0;
}