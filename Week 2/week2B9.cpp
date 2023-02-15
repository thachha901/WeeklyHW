#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int X;
    cin >> X;
    int a[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    int count_ = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            if(a[i][j] == X){
                count_++;
            }
        }
    }
    cout << count_;
    return 0;

}
