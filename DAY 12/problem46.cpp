#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int temp = n;
    int count = 0;
    int sum = 0;

    while(temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0)
    {
        int digit = temp % 10;

        sum += pow(digit, count);

        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int n;

    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}