#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    int b[m*n];
    for(int i = 0; i < m*n; i++){
        b[i] = i+1;
    }
    int biendem = 0;
    int hang = 0;
    int cot = 0;
    int x = m;
    int y = n;
    while(hang < x && cot < y){
        //Hang1
        for(int i = cot; i < y; i++){
            a[hang][i] = b[biendem];
            biendem++;
        }
        hang++;
        for(int i = hang; i < x ;i++){
            a[i][y-1] = b[biendem];
            biendem++;
        }
        y--;
        if(hang < x){
            for(int i = y-1; i >= cot; i--){
                a[x-1][i] = b[biendem];
                biendem++;
            }
            x--;
        }
        if(cot < y){
            for(int i = x-1; i>= hang; i--){
                a[i][cot] = b[biendem];
                biendem++;
            }
            cot++;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
