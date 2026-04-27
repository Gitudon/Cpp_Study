#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;
    for (int a = 1; a <= N; a++)
    {
        for (int b = 1; b <= N; b++)
        {
            int c = N - a - b;
            if (1 <= c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}