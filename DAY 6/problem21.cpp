#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long binary = 0;
    long long place = 1;

    while(n > 0) {
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binary;

    return 0;
}