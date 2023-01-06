#include<iostream>
using namespace std;

int main(){
    int k=0,flag=1,row;
cout<<"Enter number of lines: ";
cin>>row;
for(int i=1;i<=2*row-1;i++){
    if(i<row-k){
        cout<<" ";
    }
    else{
        if(flag){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        flag=1-flag;
    }
    if(i==row+k){
        k++;
        cout<<endl;
        if(i==2*row-1){
            break;
        }
        i=0;
        flag=1;
    }
}
// Output
// Enter number of lines: 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
    return 0;
}