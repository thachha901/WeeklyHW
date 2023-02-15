#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = i+1;j <= n+ i; j++){
            if(j > n) cout << j-n << " ";
            else cout << j << " ";
        }
        cout << endl;
    }
}
