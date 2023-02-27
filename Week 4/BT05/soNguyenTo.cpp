#include <iostream>

using namespace std;

bool checksnt(int n){
    if(n <= 1) return 0;
    if(n > 2) {
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

void xuatKetqua(int n){
    for(int i = 2; i < n; i++){
        if(checksnt(i) == true){
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    xuatKetqua(n);
    return 0;
}
