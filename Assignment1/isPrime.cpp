#include <iostream>
#include <cmath>
using namespace std;
int isPrime(const short &a)
{
    int flag = 1;
    for (short i = 2; i < a; ++i)
    {
        if (a % i == 0)
        {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

int main()
{
    unsigned short a;
    cin >> a;
    if (isPrime(a))
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
