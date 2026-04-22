#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Ai, maximum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Ai;
        if (Ai > maximum)
        {
            maximum = Ai;
        }
    }
    cout << maximum << endl;
}
