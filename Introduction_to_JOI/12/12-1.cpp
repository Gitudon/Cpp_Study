#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s[100000], cs[100000];
    cs[0] = 0;
    cin >> n >> m;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i];
        cs[i + 1] = cs[i] + s[i];
    }
    int k = 0, ai, ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> ai;
        int l = k, r = k + ai;
        if (l > r)
            swap(l, r);
        ans += cs[r] - cs[l];
        ans %= 100000;
        k += ai;
    }
    cout << ans << endl;
}