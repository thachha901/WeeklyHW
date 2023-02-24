#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int getRandom(){
    return rand() % 50;
}

int main()
{
    srand((unsigned int)time(NULL));
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = getRandom();
    }
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if((a[i] + a[j] + a[k]) % 25 == 0){
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
    return 0;
}
