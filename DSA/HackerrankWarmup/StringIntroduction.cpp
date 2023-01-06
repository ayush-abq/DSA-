#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    int temp, temp2;
    cin>>s1;
    cin>>s2;
    int n1 = s1.size();
    int n2 = s2.size();
    
    cout<<n1<<" "<<n2<<endl;
    cout<<s1+s2<<endl;
    temp=s1[0];
    temp2=s2[0];
    s1[0]=temp2;
    s2[0]=temp;
    cout<<s1<<" "<<s2;

}