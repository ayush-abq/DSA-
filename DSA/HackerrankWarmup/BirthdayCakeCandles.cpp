#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for (int j=0;j<n;j++)
    {
        if (max<arr[j])
            max=arr[j];
    }
    int count=0;
    for (int k=0;k<n;k++)
    {
        if (arr[k]==max)
            count++;
    }

    cout<<count;
    return 0;
}