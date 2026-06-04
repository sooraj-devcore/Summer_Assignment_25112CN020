#include <iostream>
using namespace std;

// program to Find GCD of two numbers.

int main(){
    int num1, num2 ;
    cout << "Enter smaller number : ";
    cin >> num1;
    cout << "Enter larger number :";
    cin >> num2;

    int gcd = 0;
    for( int i=1 ; i<=num1  ; i++){
        if( num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd << endl;

    return 0;
}