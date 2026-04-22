#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, ans = 0;
    cin >> N;
    for (long long i = 0; i < N; i++)
    {
        if ((i + 1) % 3 == 0 || (i + 1) % 5 == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}