#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, W, w[100];
    long long v[100];
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    long long dp[101][100001], ans = 0;
    for (int j = 0; j <= W; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i + 1][j] = dp[i][j];
            if (j + w[i] <= W)
            {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j + w[i]] + v[i]);
            }
        }
    }
    for (int j = 0; j <= W; j++)
    {
        ans = max(ans, dp[N][j]);
    }
    cout << ans << endl;
}