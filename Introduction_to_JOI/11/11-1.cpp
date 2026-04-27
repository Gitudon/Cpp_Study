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
            for (int c = 1; c <= N; c++)
            {
                if (a + b + c == N)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}