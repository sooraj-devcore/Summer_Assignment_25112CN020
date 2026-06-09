#include <iostream>
using namespace std;

int pow( int x , int n ){

    if( n==0 ){ //base case
        return 1;
    }

    if( n%2 == 0 ){
        return pow( x , n/2 ) * pow( x , n/2 );
    }
    else{
        return 2 * pow( x , n/2 ) * pow( x , n/2 );
    }


}

int main(){
    int x , n;
    
    cout <<"Enter base : ";
    cin >> x;
    cout << "Enter power : ";
    cin >> n;

    cout << pow( x , n );

    return 0;
}