#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}