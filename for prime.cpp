#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int n;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        cout << "It is a Prime" << endl;
    }
    if (isPrime == 0)
    {
        cout << "It is not a Prime" << endl;
    }
}
