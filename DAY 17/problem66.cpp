#include <iostream>
using namespace std;

int main(){

    int n,m;

    cin>>n>>m;

    int a[n],b[m];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>b[i];

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    for(int i=0;i<m;i++){

        bool found=false;

        for(int j=0;j<n;j++){

            if(b[i]==a[j]){

                found=true;

                break;
            }
        }

        if(!found)

            cout<<b[i]<<" ";
    }

    return 0;
}