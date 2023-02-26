#include <iostream>

using namespace std;

string from10to2(int a){
    string s = "";
    while(a){
        int b = a % 2;
        if(b == 0){
            s = "0" + s;
        }else s = "1" + s;
        a/=2;
    }
    return s;
}

int from2to10(string s){
    int a = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        a = a * 2 + (s[i] - '0');
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << from10to2(n) << endl;

    string s;
    cin >> s;
    cout << from2to10(s);

    return 0;
}
