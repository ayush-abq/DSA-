#include <bits/stdc++.h>
using namespace std;
int dfs(int x, int y, int wc, vector<vector<int>> &v, int n)
{
    // cout<<x<<" "<<y<<endl;
    if (wc <= 0)
    {
        // cout<<"tmp"<<endl;
        return 0;
    }
    if (x >= n || y >= n || x < 0 || y < 0 || v[x][y] == 0 || v[x][y] == -1)
    {
        return 1e9;
    }
    int ans = 1e9;
    int curr_x = x + 1;
    int curr_y = y;
    int val = v[x][y];
    v[x][y] = -1;
    while (curr_x < n - 1 && v[curr_x][curr_y] != 0)
    {
        ans = min(ans, 1 + dfs(curr_x, curr_y, wc - (curr_x - x + 1), v, n));
        curr_x++;
    }
    curr_x = x - 1;
    curr_y = y;
    while (curr_x >= 0 && v[curr_x][curr_y] != 0)
    {
        ans = min(ans, 1 + dfs(curr_x, curr_y, wc - (x - curr_x + 1), v, n));
        curr_x--;
    }
    curr_x = x;
    curr_y = y + 1;
    while (curr_y < n - 1 && v[curr_x][curr_y] != 0)
    {
        ans = min(ans, 1 + dfs(curr_x, curr_y, wc - (curr_y - y + 1), v, n));
        curr_y++;
    }
    curr_x = x;
    curr_y = y - 1;
    while (curr_y >= 0 && v[curr_x][curr_y] != 0)
    {
        ans = min(ans, 1 + dfs(curr_x, curr_y, wc - (y - curr_y + 1), v, n));
        curr_y--;
    }
    v[x][y] = val;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    // cout<<n<<endl;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        // cout<<n<<endl;
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            // cout<<c<<endl;
            v[i][j] = c - '0';
        }
    }

    int no_of_white_cells = 0;
    int token_x = 0;
    int token_y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout<<v[i][j]<<" ";
            if (v[i][j] == 1)
            {
                no_of_white_cells++;
            }
            if (v[i][j] == 2)
            {
                token_x = i;
                token_y = j;
            }
        }
        // cout<<endl;
    }
    // cout<<token_x<<" "<<token_y<<endl;
    int ans = dfs(token_x, token_y, no_of_white_cells, v, n) - 6;
    cout <<"The answer is : "<< ans << endl;
}