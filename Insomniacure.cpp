#include <iostream>
#include <vector>
using namespace std;

void markDamageDragon(vector<bool> &damage, int n, int &count, int size)
{
    for (int i = n; i <= size; i += n)
    {
        if (damage[i] == false)
        {
            damage[i] = true;
            count++;
        }
    }
}

int main()
{

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<bool> visitedDragons(d + 1, false);

    int count = 0;

    markDamageDragon(visitedDragons, k, count, d);
    markDamageDragon(visitedDragons, l, count, d);
    markDamageDragon(visitedDragons, m, count, d);
    markDamageDragon(visitedDragons, n, count, d);

    cout << count;

    return 0;
}