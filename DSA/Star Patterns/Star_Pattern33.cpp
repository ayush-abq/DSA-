#include<iostream>
using namespace std;

int main(){
    int k,num;
char alpha;
for(int i=1;i<=4;i++){
    k=1;
    num=1;
    alpha='A';
    for(int j=1;j<=7;j++){
        if(j>=5-i && j<=3+i){
            if(k){
                if(i%2==0){
                    cout<<num;
                    num++;
                }
                else{
                    cout<<alpha;
                    alpha++;
                }
            }
            else{
                cout<<" ";
            }
            k=1-k;
        }
        else{
                cout<<" ";
        }        
    }
    cout<<endl;
}
// Output
//    A
//   1 2
//  A B C
// 1 2 3 4
    return 0;
}