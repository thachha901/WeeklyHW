#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;
    cin >> n;
    int a[100];
    while(n>0){
        cin >> t;
        for(int i = 0; i < t; i++){
            cin >> a[i];
        }
        int sum1, sum2;
        int i = 0;
        while(i < t-2){
            sum1 = 0;
            sum2 = 0;
            for(int k = 0; k <= i; k++){
                sum1+=a[k];
            }
            for(int j = i+2; j < t; j++){
                sum2+=a[j];
            }
            if(sum1 == sum2){
                cout << "yes";
                break;
            }
            i++;
        }
        if(sum1 != sum2){
            cout << "no";
        }
        n--;
    }
    return 0;
}
