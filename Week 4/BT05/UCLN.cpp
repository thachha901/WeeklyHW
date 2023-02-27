#include <iostream>

using namespace std;

int UCLN(int a, int b){
    int uc;
    while(a % b != 0){
        uc = a % b;
        if(a % b == 0){
            uc = b;
        }else{
            b = a % b;
            a = b;

        }
    }
    return uc;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
    return 0;
}
