#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Ai, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Ai;
        if (Ai >= 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
