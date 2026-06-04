#include <iostream>
using namespace std;

int main(){
    int i=1,n,fact=1;
    cout << "Enter number : ";
    cin >> n;
    while(i<=n){
        fact = fact*i;
        i++;
    }

    cout << "factorial is " << fact <<endl;
    return 0;
}