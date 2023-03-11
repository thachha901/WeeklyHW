#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;

};

void print(Point point){
        cout << &point;
}

int main()
{
    Point point;
    cin >> point.x >> point.y;
    cout << &point.x << endl << &point.y << endl;
    print(point);
    return 0;
}

