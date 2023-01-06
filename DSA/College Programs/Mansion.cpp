#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, w;
    cin >> n >> w;
    vector<int> P;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        P.push_back(a);
    }
    int ans;
    int sumUptil = 0;
    for (int i = 0; i < w; i++)
    {
        sumUptil += P[i];
    }
    ans = sumUptil;
    for (int i = w; i < n; i++)
    {
        sumUptil += (P[i] - P[i - w]);
        if (ans < sumUptil)
            ans = sumUptil;
    }
    cout << "The answer is " << ans << endl;
}
