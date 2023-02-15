#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float tong,TB;

    int a[n];
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    int max1 = a[0], min1 = a[0];
    for(int i = 0; i < n; i++){
        tong+= a[i];
        if(a[i] > max1){
            max1 = a[i];
        }
        if(a[i] < min1){
            min1 = a[i];
        }
    }
    cout << "Mean: " << tong/n << endl << "Max: " << max1 << endl << "Min: " << min1 << endl;
    return 0;
}
