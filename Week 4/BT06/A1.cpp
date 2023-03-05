#include <iostream>

using namespace std;

void f(){
    int A[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << &A << endl << &A[0] << endl;
}

int main()
{
    int A[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout <<&A << endl;
    cout << &A[0] << endl;

    f();

    return 0;
}

//Địa chỉ của biến mảng và giá trị đầu tiên của mảng đều giống nhau, địa chỉ của hàm f() và địa chỉ của mảng trong hàm main cách nhau 4 byte

