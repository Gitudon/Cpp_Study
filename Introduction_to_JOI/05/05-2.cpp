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
        if (A[i] % 2 == 0)
        {
            cout << A[i] << endl;
        }
    }
}