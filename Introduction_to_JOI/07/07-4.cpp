#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
    cout << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
}