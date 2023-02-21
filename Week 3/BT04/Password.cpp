#include <iostream>

using namespace std;

string checkDX(string a){
    int n = a.size();
    string b = "";
    for(int i = n-1; i >= 0; i--){
        b+=a[i];
    }
    return b;
}

char passWord(string a){
    int n = a.size();
    char kytu;
    if(n % 2 == 0){
        return ' ';
    }else{
        int value = (n/2)+1;
        kytu = a[value - 1];
    }
    return kytu;
}

int main()
{
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(checkDX(a[i]) == a[j]){
                cout << a[i].size() << " " << passWord(a[i]) << endl;
                return 0;
            }
        }
    }
    return 0;
}
