#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[100000], l, r;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cin >> l >> r;
    int sum = 0;
    for (int i = l - 1; i < r; i++)
    {
        sum += A[i];
    }
    cout << sum << endl;
}