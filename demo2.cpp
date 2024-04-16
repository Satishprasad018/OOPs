#include <cmath>
#include <iostream>
using namespace std;
int checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return n;
}

int main()
{
    int num = 7;
    int arr[n];
    // if (checkPrime(num))

    for (int i = 0; i < n; i++)
    {
        int arr[n] = checkPrime(i);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
