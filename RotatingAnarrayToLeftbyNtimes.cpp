#include <iostream>

using namespace std;

void Rotatedarray(int arr[], int n, int k){
    //Where k is the number of rotations to be performed
    int rotarr[1000];
    for(int i=0;i<n;i++){
        rotarr[i]=arr[(i+k)%n];
    }
    for(int i=0;i<n;i++){
        cout<<rotarr[i]<<" ";
    }
    
}


int main()
{
    //Rotating an array:
    int arr[1000];
    int n;
    cin>>n;
    int rotations;
    cin>>rotations;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Rotatedarray(arr,n,rotations);
    

    return 0;
}
