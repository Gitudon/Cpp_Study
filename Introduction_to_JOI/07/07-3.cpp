#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B)
    {
        swap(A, B);
    }
    if (B > C)
    {
        swap(B, C);
    }
    if (A > B)
    {
        swap(A, B);
    }
    cout << A << " " << B << " " << C << endl;
}