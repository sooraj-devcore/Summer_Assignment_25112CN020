#include <iostream>
using namespace std;

int fact( int x ){
    if( x == 0 || x == 1 ){
        return 1;
    }

    return x * fact(x-1);
}

int main(){
    int n , d;
    int sum = 0;

    cout << " Enter number : ";
    cin >> n;

    int temp = n;

    while( n > 0 ){
        d = n % 10;
        sum += fact(d);
        n = n / 10;
    }

    if( sum == temp ){
        cout << " Entered number is strong ";
    }

    else{
        cout << " Entered number is not strong ";
    }

    return 0;

}