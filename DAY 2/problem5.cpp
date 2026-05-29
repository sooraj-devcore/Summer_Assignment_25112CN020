#include <iostream>
using namespace std;

//program to Find sum of digits of a number.


int main(){
    int n,d;
    cout << "Enter number : ";
    cin >> n;
    int sum=0;
    while(n>0){
        d = n%10;
        sum = sum+d;
        n = n/10;
    }

    cout << "Sum is " << sum << endl;
    return 0;
}
