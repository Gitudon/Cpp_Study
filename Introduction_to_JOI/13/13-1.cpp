#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[100];
    for (int i = 0; i < N; i++)
    {
        int idx = i;
        for (int j = i + 1; j < N; j++)
        {
            if (A[j] < A[idx])
            {
                idx = j;
            }
        }
        swap(A[i], A[idx]);
    }
}