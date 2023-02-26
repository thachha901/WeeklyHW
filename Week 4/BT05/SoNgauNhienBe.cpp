#include <iostream>
#include <ctime>

using namespace std;

int getNumber(){
    int n;
    cin >> n;
    return n;
}

int getResult(int n){
    int b = n + 1;
    while(b > n){
        b = rand();
    }
    return b;
}

int main()
{
    srand((unsigned int)time(NULL));
    cout << getResult(getNumber());
    return 0;
}
