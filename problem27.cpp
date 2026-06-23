#include <iostream> 
using namespace std;

int sum( int n ){

    int d = n % 10;
    if( n == 0 ){
        return 0;
    }

    return d + sum ( n/10 );
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}