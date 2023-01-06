#include<bits/stdc++.h>
using namespace std;
int main()
{
 int moves[10] = {3,-1,6,-3,1,-5,1,5,1,-3};
 unordered_set<int> delivered;
 int home = 0;
 delivered.insert(home);
 for(int i=0;i<10;i++)
 {
 home += moves[i];
 if(delivered.find(home) != delivered.end())
 {
 cout<<"Error in instruction : "<<i+1<<endl;
 home = home - moves[i];
 }
 else
 delivered.insert(home);
 }
 return 0;
}