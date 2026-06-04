#include <iostream>
using namespace std;

//program to Print prime numbers in a range.

int main(){
    int start,end;
    //int prime = 1; (condition should also be a part of the loop)
    cout << "Enter first number : ";
    cin >> start;
    cout << "Enter second number : ";
    cin >> end;
    for( int num = start ; num <= end ; num++){
        int prime = 1;
        for(int i=2 ; i < num ; i++){
            if( num%i == 0){
                prime = 0;
                break; // It does not break out of if statements (it just ignores them and looks for the loop wrapping the if statement). 
            }
        }
        if( prime == 1){
            cout << num << endl;
        }

    }
    return 0;
}


