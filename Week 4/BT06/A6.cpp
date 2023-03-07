#include <iostream>

using namespace std;

long long int fib(int n){
    int a[10000];
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}
