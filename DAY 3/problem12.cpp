#include <iostream>
using namespace std;

// program to Find LCM of two numbers

int main(){
    int num1 , num2;
    cout << "Enter smaller  number : ";
    cin >> num1;
    cout << "Enter greater number : ";
    cin >> num2;

    int gcd = 0;

    for( int i=2 ; i <= num1 ; i++ ){
        if( num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }

    int LCM = (num1*num2)/gcd ; 

    cout << "The LCM of the given numbers is : " << LCM << endl;

    return 0;
}