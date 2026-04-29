#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[100];
    for (int i = 0; i < N; i++)
    {
        int j, tmp = A[i];
        for (j = i - 1; j >= 0 && A[j] > tmp; j--)
        {
            A[j + 1] = A[j];
        }
        A[j + 1] = tmp;
    }
}