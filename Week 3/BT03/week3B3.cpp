#include <iostream>

using namespace std;

bool soDX(int a){
    int k = a;
    int x;
    int y = 0;
    while(a > 0)
    {
        x = a % 10;
        y = y * 10 + x;
        a/=10;
    }
    if(k == y){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a, b;
    int k = 0;
    while(k < n){
        cin >> a >> b;
        int count1 = 0;
        for(int i = a; i <= b; i++){
            if(soDX(i) == 1){
                count1++;
            }
        }
        cout << count1 << endl;
        k++;
    }
    return 0;
}
