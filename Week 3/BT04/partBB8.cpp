#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n], b[n], c[n], d[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        c[i] = a[i] - b[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                double tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            if(b[i] > b[j]){
                double tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        d[i] = a[i] - b[i];
    }
    int count1 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i] == d[i]){
                count1++;
            }
        }
    }
    if(count1 == n){
        cout << "no";
        return 0;
    }else cout << "yes"; return 0;
    return 0;
}
