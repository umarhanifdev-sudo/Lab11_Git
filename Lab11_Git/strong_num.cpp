#include <iostream>
using namespace std;

int factorial(int);
int is_strong(int);

int main()
{
    int num;  // initializing user defined variable
    cout << "n: ";
    cin >> num; // taking input from user
	 
    for (int i = 1; i <= num; i++)
    {
        if (is_strong(i))
            cout << i << endl; // print all the strong numbers
    }
}

int factorial(int n)  // take factorial of the digit of the number
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int is_strong(int m)  // check if the number is strong
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
