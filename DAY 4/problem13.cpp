#include <iostream>
using namespace std;

//  program to Generate Fibonacci series. 

int main(){
     int n,a1,a2;

     cout << "Enter number of terms : ";
     cin >> n;


     a1 = 0;
     a2 = 1; // Always initialise the starting terms out of the loop.


     for( int i=0 ; i<n ; i++){
        
        cout << a1 << " ";
        int next = a1 + a2; 
        a1 = a2;
        a2 = next;
     }
     return 0;
}