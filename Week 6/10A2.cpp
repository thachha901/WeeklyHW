#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
};

void add(Point point){
    point.x += 1;
    point.y += 1;
    cout << &point << endl;
}

void add1(Point& point){
    point.x += 1;
    point.y += 1;
    cout  << &point << endl;
}

int main()
{
    Point point;
    cin >> point.x >> point.y;
    add(point);
    add1(point);
    return 0;
}
