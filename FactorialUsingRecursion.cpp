
#include <iostream>

using namespace std;

int factorialusingRecursion(int n){
    if(n>1){
        return factorialusingRecursion(n-1)*n;
    }
    return 1;
}

int main()
{   int x;
    cin>>x;
    int fac= factorialusingRecursion(x);
    std::cout << fac << std::endl;
    return 0;
}
