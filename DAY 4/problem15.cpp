#include <iostream>
using namespace std;

int main(){
    int n , d , temp;
    int sum = 0;

    cout << " Enter number : ";
    cin >> n;

    temp = n;

    while(n>0){
        d = n % 10;
        sum = sum + d*d*d;
        n = n/10;
    }

    if( sum == temp){
        cout <<"No. is armstrong ";
    }
    else{
        cout << "No. is not armstrong ";
    }

    return 0;


}