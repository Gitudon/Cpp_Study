#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[100];
    for (int h = 2391484; h >= 1, h = (h - 1) / 3)
    {
        cout << h << endl;
        for (int i = 0; i < h; i++)
        {
            int j, tmp = A[i];
            for (j = i - h; j >= 0 && A[j] > tmp; j -= h)
            {
                A[j + h] = A[j];
            }
            A[j + h] = tmp;
        }
    }
}