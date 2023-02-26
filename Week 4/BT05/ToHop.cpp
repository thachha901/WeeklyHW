#include <iostream>

using namespace std;

int C(int k, int n){
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return C(k-1, n-1) + C(k, n-1);

}

int main()
{
    int k, n;
    do{
        cin >> k >> n;
        if(k<= n && k >= 0 && n >= 1 && n <= 20){
            cout << C(k, n);
        }else return 0;
    }while(k != -1 && n != -1);
    return 0;
}
