#include <iostream>
using namespace std;

int main(){
      int n , sum = 0;
      
      cout << "Enter number : ";
      cin >> n;

      for( int i=1 ; i < n ; i++ ){
        if( n % i == 0 ){
            sum = sum + i;   
        }
      }
      if( sum == n){
        cout << "Entered number is perfect number .";
      }
      else{
        cout << "Entered number is not a a perfect number";
      }

      return 0;
}