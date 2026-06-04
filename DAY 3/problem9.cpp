#include <iostream>
using namespace std;

//program to Check whether a number is prime.


int main(){
    int n;
    cout << "Enter number :";
    cin >>n ;
    int prime=0;
    for(int i=2 ; i*i <= n ; i++){
        if( n%i == 0){
            prime = 1;
            break;
        }
    }
    if( prime==1 ){
        cout <<"Entered number is not prime" <<endl;
    }

    else if( n==1 ){
            cout << "1 is neither prime nor composite ";
        }
        else if( n==0 ){
            cout << "Not defined";
        }

    else{
        cout << "Number is  prime" <<endl;
    }
    return 0;
}