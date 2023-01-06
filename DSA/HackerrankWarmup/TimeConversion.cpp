#include<iostream>
using namespace std;
int main(){
    int hour, minute, second, h1, m1, s1;
    char median;
    char ch=':';

    cin>>hour>>minute>>second>>median;

    if((median, "PM")==0){
        if(hour<12){
            h1=hour+12;
            m1=minute;
            s1=second;
            cout<<h1<<ch<<m1<<ch<<s1;
        }
        else if(hour==12){
            h1=hour;
            m1=minute;
            s1=second;
            cout<<h1<<ch<<m1<<ch<<s1;
        }
    }
    else if((median, "AM")==0){
        if(hour<12){
            h1=hour;
            m1=minute;
            s1=second;
            cout<<h1<<ch<<m1<<ch<<s1;
        }
        else if(hour=12){
            m1=minute;
            s1=second;
            cout<<h1<<ch<<m1<<ch<<s1;
        }
    }

    return 0;
}