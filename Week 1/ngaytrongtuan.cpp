#include <iostream>

using namespace std;

bool snt(int n)
{
    if(n <= 1) return 0;
    if(n >= 3){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if(snt(n) == 1){
        cout << "yes";
    }else cout << "no";
    return 0;

}
