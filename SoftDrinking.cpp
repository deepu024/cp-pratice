#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int minVal1 = (k * l);
    int minVal2 = (minVal1 / nl);
    int minVal4 = (c * d);
    int minVal3 = (p / np);

    int ans = min(min(minVal1, minVal2), min(minVal3, minVal4)) / n;

    cout << ans;

    return 0;
}