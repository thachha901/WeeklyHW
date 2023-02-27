#include <iostream>

using namespace std;

void tamGiac(int n){
    for(int x = 0; x < n; x++){
        for(int y = 0; y < 2*n-1; y++){
            if(y >= n - x -1 && y <= n + x -1){
                cout << "*";
            }else cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    tamGiac(n);
    return 0;
}
