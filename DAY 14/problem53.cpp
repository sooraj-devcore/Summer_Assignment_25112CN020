#include <iostream>
using namespace std;

int linear_search(int array[] , int n , int key ){

    for(int i=0 ; i<n ; i++){
        if(array[i] == key){
             return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,7,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Index = " << linear_search(arr,n,10) <<endl; 
    return 0;
}

