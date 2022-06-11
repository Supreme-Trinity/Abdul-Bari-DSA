//Recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

int RbinarySearch(int arr[],int s,int e,int key){
    if(s<=e){
        int mid= floor((s+e)/2);
        
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            RbinarySearch(mid+1,e,key);
        }
        else{
            RbinarySearch(s,mid-1,key);
        }
    }
    return -1;
}
int main()
{   int arr[5]={1,12,1212,121212,2323};
    int index= RbinarySearch(arr,0,arr.length-1,2323);
    std::cout << index << std::endl;
   

    return 0;
}
