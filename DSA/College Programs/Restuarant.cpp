#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nc, nr;
    vector<int> D, R;
    cin >> nc;
    for (int i = 0; i < nc; i++)
    {
        int a;
        cin >> a;
        D.push_back(a);
    }
    cin >> nr;
    for (int j = 0; j < nr; j++)
    {
        int b;
        cin >> b;
        R.push_back(b);
    }
    sort(D.rbegin(), D.rend());
    int count = 0;
    int left_people = 0;
    for (int i = 0; i < nr; i++)
    {
        int seats = R[i];
        for (int j = 0; j < min(seats, int(D.size() - count)); j++)
        {
            D[j]--;
            if (D[j] == 0)
                count++;
        }
        sort(D.rbegin(), D.rend());
    }
    for (int i = 0; i < int(int(D.size()) - count); i++)
        left_people += D[i];
    cout <<"The answer is :" << left_people << endl;
}
