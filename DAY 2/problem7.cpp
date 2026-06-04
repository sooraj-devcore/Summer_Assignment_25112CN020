#include <iostream>
using namespace std;

//program to Find product of digits.

int main(){
    int n,d;
    cout << "Enter number : ";
    cin >> n;

    int prod=1;

    while(n>0){
        d = n%10;
        prod = prod*d;
        n = n/10;
    }

    cout << "Product is  " << prod << endl;
    return 0;
}
