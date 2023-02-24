#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n+1];
    for(int i = 0; i <= n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j <= n; j++){
            if(b[i] > b[j]){
                int tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        if(a[i] != b[i]){
            cout << b[i];
            break;
        }
    }
    return 0;
}
