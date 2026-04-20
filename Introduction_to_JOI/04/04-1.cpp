#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N - 2; i++)
    {
        if (S[i] == 'j' && S[i + 1] == 'o' && S[i + 2] == 'i')
        {
            S[i] = 'J';
            S[i + 1] = 'O';
            S[i + 2] = 'I';
        }
    }
    cout << S << endl;
}