//Recursive Binary Search
#include <stdio.h>
using namespace std;

int RbinarySearch(int arr[],s,e,key){
    if(s<=e){
        int mid= floor((s+e)/2);
        
        if(arr[i]==mid){
            return i;
        }
        else if(mid>arr[i]){
            RbinarySearch(mid+1,e,key);
        }
        else{
            RbinarySearch(s,mid-1,key);
        }
    }
    return -1;
}
int main()
{
   

    return 0;
}
