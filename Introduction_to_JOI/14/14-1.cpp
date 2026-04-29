#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, a[100000], b[100000], c[100000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    int dp[100001][3];
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for (int i = 0; i < N; i++)
    {
        dp[i + 1][0] = max(dp[i][1], dp[i][2]) + a[i];
        dp[i + 1][1] = max(dp[i][2], dp[i][0]) + b[i];
        dp[i + 1][2] = max(dp[i][0], dp[i][1]) + c[i];
    }
    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;
}