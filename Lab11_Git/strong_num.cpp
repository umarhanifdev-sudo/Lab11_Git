#include <iostream>
using namespace std;

int factorial(int);
int is_strong(int);

int main()
{
    int num;
    cout << "n: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (is_strong(i))
            cout << i << endl;
    }
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int is_strong(int m)
{
    int sum = 0;
    for (int temp = m; temp > 0; temp /= 10)
    {
        int digit = temp % 10;
        sum += factorial(digit);
    }
    if (sum == m)
        return 1;
    else
        return 0;
}
