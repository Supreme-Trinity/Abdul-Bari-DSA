#include <iostream>

using namespace std;

int powerUsingRecursion(int b, int e){
    if(e>=1){
        return powerUsingRecursion(b,e-1)*b;
    }
    return 1;
}
int main()
{   int x;
    cin>>x;
    int e;
    cin>>e;
    int poww= powerUsingRecursion(x,e);
    std::cout << poww << std::endl;
    return 0;
}
