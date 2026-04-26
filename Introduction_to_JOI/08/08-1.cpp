#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long K, H[200000], ans = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    sort(H, H + N);
    for (int i = 0; i < N - K; i++)
    {
        ans += H[i];
    }
    cout << ans << endl;
}