#include <iostream>

using namespace std;

int main()
{
    int a[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    int max1 = a[0];
    for(int i = 0; i < 5; i++){
        if(a[i] > max1){
            max1 = a[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(a[i] == max1){
            a[i] = 0;
        }
    }
    int max2 = a[0];
    for(int i = 0; i < 5; i++){
        if(a[i] > max2){
            max2 = a[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(a[i] == max2){
            a[i] = 0;
        }
    }
    int max3 = a[0];
    for(int i = 0; i < 5; i++){
        if(a[i] > max3){
            max3 = a[i];
        }
    }
    cout << max3;

    return 0;
}
