#include <iostream>
using namespace std;

bool check_prime(long long int n)
{
    bool is_prime = true;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (long long int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

string isNextPrime(long long int n, long long int nextPrime)
{
    long long int num = n + 1;
    for (long long int i = num; true; i++)
    {
        if (check_prime(i))
        {
            num = i;
            break;
        }
    }

    if (nextPrime == num)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{

    long long int n;
    cin >> n;
    long long int nextPrime;
    cin >> nextPrime;

    cout << isNextPrime(n, nextPrime);

    return 0;
}