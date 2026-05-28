#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cout << "Enter number :";
    cin >> n;
    while(n>0){
        n = n/10;
        count = count+1 ;
    }
    cout << "The number of digits are " << count <<endl;
    return 0;
}