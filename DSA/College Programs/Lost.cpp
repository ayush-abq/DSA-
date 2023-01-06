#include <bits/stdc++.h>
using namespace std;
vector<char> insertAt(vector<char> v, int i)
{
    vector<char> tmp(v.size() + 1, 'X');
    for (int i = 0; i < v.size(); i++)
    {
        tmp[i] = v[i];
    }
    int n = v.size();
    for (int j = n - 1; j >= i; j--)
    {
        swap(tmp[j], tmp[j + 1]);
    }
    tmp[i] = 'R';
    return tmp;
}
bool helper(vector<char> correct, int fx, int fy)
{
    int x = 0;
    int y = 0;
    char currDr = 'N';
    for (int i = 0; i < correct.size(); i++)
    {
        if (x == fx && y == fy)
        {
            return true;
        }
        if (correct[i] == 'R')
        {
            if (currDr == 'N')
            {
                currDr = 'E';
            }
            else if (currDr == 'E')
            {
                currDr = 'S';
            }
            else if (currDr == 'S')
            {
                currDr = 'W';
            }
            else if (currDr == 'W')
            {
                currDr = 'N';
            }
        }
        else if (correct[i] == 'L')
        {
            if (currDr == 'N')
            {
                currDr = 'W';
            }
            else if (currDr == 'W')
            {
                currDr = 'S';
            }
            else if (currDr == 'S')
            {
                currDr = 'E';
            }
            else if (currDr == 'E')
            {
                currDr = 'N';
            }
        }
        else if (correct[i] == 'F')
        {
            if (currDr == 'N')
            {
                y += 1;
            }
            else if (currDr == 'E')
            {
                x++;
            }
            else if (currDr == 'S')
            {
                y--;
            }
            else if (currDr == 'W')
            {
                x--;
            }
        }
    }
    if (x == fx && y == fy)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    int fx, fy;
    cin >> fx >> fy;
    int n = s.length();
    vector<char> mp(n);
    for (int i = 0; i < n; i++)
    {
        mp[i] = s[i];
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        vector<char> correct = insertAt(mp, i);
        if (helper(correct, fx, fy))
        {
            ans = i;
        }
    }
    cout <<"The answer is : "<< ans << endl;
}