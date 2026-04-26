#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[100000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[N - 1 - i] << endl;
    }
}