#include <iostream>

using namespace std;

bool kiemtraDX(string s)
{
    string s1 = "";
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        s1+=s[i];
    }
    if(s1 == s){
        return 1;
    }
    return 0;
}

int main()
{
    string s;
    cin >> s;
    if(kiemtraDX(s) == 1){
        cout << "YES";
    }else cout << "NO";
    return 0;
}
