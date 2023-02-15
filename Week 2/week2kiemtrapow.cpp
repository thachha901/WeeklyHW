#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    long long int res = 1;
    for(int i = 1; i <= b; i++){
        res *= a;
    }
    cout << res << endl << pow(a, b);
}
