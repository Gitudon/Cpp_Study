#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, A[100][100], minimum = 100, ans = 0;
    cin >> H >> W;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
            minimum = min(minimum, A[i][j]);
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            ans += A[i][j] - minimum;
        }
    }
    cout << ans << endl;
}