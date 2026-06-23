#include <iostream>
using namespace  std;

int main(){

    int d, start , end ,n ;

    cout << "Enter starting number of the range : ";
    cin >> start;

    cout << "Enter last number of the range : ";
    cin >> end;


    for( int num = start ; num <= end ; num++ ){

        int temp = num;
        int n = num;
        int sum = 0; //Initialise sum = 0 for every iteration..

        while( n>0 ){
            d = n % 10;
            sum = sum + d*d*d;
            n = n/10;
        }

        if( sum == temp){
            cout << num << " ";
        }
        
    }
        return 0;
    
}