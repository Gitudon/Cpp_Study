#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Ai;
    cin >> N;
    int ans = 1000000000;
    for (int i = 0; i < N; i++)
    {
        cin >> Ai;
        ans = min(ans, Ai);
    }
    cout << ans << endl;
}