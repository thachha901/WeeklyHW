#include <iostream>
#define MAX 20
using namespace std;


string s;
int n = s.size();
int check[MAX] = { 0 };
char A[MAX];

void xuat() {
    for (int i = 0; i < n; i++)
        cout << A[i];
        cout << endl;
}

void hoanvi(int k) {
    for (int i = 0; i < n; i++) {
        if (!check[i]) {
            A[k] = s[i];
            check[i] = 1;
        if (k == n - 1)
            xuat();
        else
        hoanvi(k + 1);
        check[i] = 0;
        }
    }
}

int main() {
    cin >> s;
    n = s.size();
    hoanvi(0);
    return 0;
}
