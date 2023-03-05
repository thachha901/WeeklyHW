#include <iostream>

using namespace std;

long long int F(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return F(n-1) + F(n-2);
}

int main()
{
    int n;
    cin >> n;
    int f0 = 0, f1 = 1;
    long long int fn;
    if(n == 0) cout << f0;
    if(n == 1) cout << f1;
    for(int i = 1; i < n; i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    cout << fn << endl;
    cout << F(n);

    return 0;
}

//Khi dùng đệ quy thì thời gian chạy của chương trình lâu hơn so với chạy vòng lặp khoảng 2s//
