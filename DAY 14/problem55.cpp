#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,23,4,5,6};
    int max1 , max2;
    if( arr[0] > arr[1] ){
        max1 = arr[0];
    }
    else{
        max2 = arr[0];
    }

    for( int i=2 ; i<5 ; i++ ){
        if( arr[i] > max1 ){
            max1 = arr[i];
            max2 = max1;
        }
        else{
            max2 = arr[i];
        }
    }
    cout << "The second largest element is : " << max2 << endl;

    return 0;
}