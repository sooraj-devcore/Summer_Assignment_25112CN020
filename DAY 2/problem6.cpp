#include <iostream>
using namespace std;

//program to Reverse a number

int main(){
    int n,d;
    cout << "Enter number : ";
    cin >> n;
    int rev = 0;
    
    while(n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }

    cout << "The reverse is " << rev << endl;
    return 0;
}

