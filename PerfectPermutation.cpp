#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<int> permutation(n);

    for (int i = 0; i < n; i += 2)
    {
        permutation[i] = i + 2;
        permutation[i + 1] = i + 1;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << permutation[i] << " ";
    }

    return 0;
}
