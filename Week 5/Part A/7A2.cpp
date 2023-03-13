#include <iostream>

using namespace std;

void f(int* arr, int n){
    cout << sizeof(arr) << endl;
}

int main()
{
    int a[7] = {1,2,3,4,5,6,7};
    cout << sizeof(a) << endl;
    f(a, 7);
    return 0;
}
