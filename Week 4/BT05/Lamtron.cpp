#include <iostream>
#include <cmath>

using namespace std;

void result(double x){
    if(ceil(x) - x >= 0.5){
        cout << floor(x) << endl;
    }else cout << ceil(x) << endl;
}

void res(double x){
    int n = x;
    if(x - n >= 0.5){
        cout << n + 1;
    }else cout << n;
}

int main()
{
    double x;
    cin >> x;
    result(x);
    res(x);
    return 0;
}
