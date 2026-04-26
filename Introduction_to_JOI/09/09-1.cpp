#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, A[1000], B[1000], C[1000];
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
        C[i] = -1;
    }
    int ans = 0, ans_count = 0;
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if (A[i] <= B[j] && C[j] == -1)
            {
                count++;
                C[j] = i + 1;
            }
        }
        if (count > ans_count)
        {
            ans_count = count;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}