
#include <iostream>

using namespace std;

int sumrec(int n){
    if(n>0){
        return sumrec(n-1)+n;
    }
    return 0;
}
int main()
{   int x;
    cin>>x;
    int sum=sumrec(x);
    std::cout << sum << std::endl;
    return 0;
}
