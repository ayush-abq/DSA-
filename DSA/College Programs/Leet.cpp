#include <bits/stdc++.h>
using namespace std;
void modifyString(string &s, string &s1,
                  string &s2)
{

    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {

        int k = 0;
        if (s[i] == s1[k] && i + s1.length() <= s.length())
        {
            int j;
            for (j = i; j < i + s1.length(); j++)
            {
                if (s[j] != s1[k])
                {
                    break;
                }
                else
                {
                    k = k + 1;
                }
            }
            if (j == i + s1.length())
            {
                ans.append(s2);
                i = j - 1;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    s = ans;
}

int main()
{
    string S;
    getline(cin, S);
    string S1 = "two";
    string S2 = "2";
    modifyString(S, S1, S2);
    string S3 = "too";
    modifyString(S, S3, S2);
    string S13 = "to";
    modifyString(S, S13, S2);
    string S4 = "tu";
    modifyString(S, S4, S2);
    string S5 = "four";
    string S6 = "4";
    modifyString(S, S5, S6);
    string S7 = "fore";
    modifyString(S, S7, S6);
    string S8 = "for";
    modifyString(S, S8, S6);
    string S9 = "eight";
    string S10 = "4";
    modifyString(S, S9, S10);
    string S11 = "eat";
    modifyString(S, S11, S10);
    string S12 = "ate";
    modifyString(S, S12, S10);
    cout << S;
    cout<<endl;
    cout <<"Letters in final conversion is : "<< S.length();
}