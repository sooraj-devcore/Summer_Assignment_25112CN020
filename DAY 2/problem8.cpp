#include <iostream>
using namespace std;

//program to Check whether a number is palindrome.


int main(){
    int n,d;
    cout << "Enter number : ";
    cin >> n;

    int temp = n;

    int rev = 0;
    while(n > 0){
        d = n%10;
        rev = rev*10+d;
        n=n/10;
    }

    if(rev == temp){
        cout << "No. is palindrome" << endl;
    }
    else{
        cout << "No. is not a palindrome" << endl;
    }

    return 0;
}