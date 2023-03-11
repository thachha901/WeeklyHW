#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;

};

void mid_point(const Point point1, const Point point2 ){
    cout << (point1.x + point2.x)/2 << " " << (point1.y + point2.y)/2 << endl;
}

int main()
{
    Point point1, point2;
    cin >> point1.x >> point1.y >> point2.x >> point2.y;
    mid_point(point1, point2);
    return 0;
}
