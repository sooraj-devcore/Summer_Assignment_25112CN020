#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n-1];

    for(int i=0;i<n-1;i++)
        cin>>arr[i];

    int total=0;

    for(int i=1;i<=n;i++)
        total+=i;

    int sum=0;

    for(int i=0;i<n-1;i++)
        sum+=arr[i];

    cout<<total-sum;

    return 0;
}