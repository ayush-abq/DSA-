#include<iostream>
using namespace std;

int greatestNum(int a, int b, int c, int d){
    int max=0;
    if(a>b && a>c && a>d){
        max=a;
    }
    else{
        if(b>c && b>d){
            max=b;
        }
        else{
            if(c>d){
                max=c;
            }
            else{
                max=d;
            }
        }
    }
    return max;
};

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int result = greatestNum(a, b, c, d);
    cout<<result;
    return 0;
}