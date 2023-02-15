#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int luong = 0;
    if(n <= 100){
        luong += 100 * 12000;
    }else if(n > 100 && n <=150){
        luong += 100 * 12000 + (n-100) * 16000;
    }else if(n > 150 && n <= 200){
        luong += 100 * 12000 + 50 * 16000 + (n-150)* 20000;
    }else if(n > 200)
    {
        luong += 100 * 12000 + 50 * 16000 + 50 * 20000 + (n-200) * 25000;
    }
    cout << luong;
    return 0;
}
