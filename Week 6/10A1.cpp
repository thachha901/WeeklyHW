#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
    void print(){
        cout << "Toa do cua x la " << x << endl << "Toa do cua y la " << " " << y << endl;
    }
};

int main()
{
    Point point;
    cin >> point.x >> point.y;
    point.print();
    return 0;
}
