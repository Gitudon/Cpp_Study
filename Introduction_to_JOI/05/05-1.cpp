#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, A[100], B[100];
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
        B[i] = 0;
    for (int i = 0; i < N; i++)
        B[A[i] - 1]++;
    int ans = 0;
    for (int i = 0; i < M; i++)
        if (B[i] > ans)
            ans = B[i];
    cout << ans << endl;
}