#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    if (A < 0)
        cout << -A * C + D + E * B << endl;
    else if (A == 0)
        cout << D + E * B << endl;
    else
        cout << E * (B - A) << endl;
}