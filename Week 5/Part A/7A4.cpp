#include <iostream>

using namespace std;

int binarySearch(int *a, int x, int high, int low){
    if(low > high) return -1;
    int mid = (low+high)/2;
    if(*(a+mid) == x) return mid;
    if(*(a+mid) > x) return binarySearch(a, x, mid-1, low);
    return binarySearch(a,x,high, mid+1);
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 7;
    cout << binarySearch(a,x,9,0);
    return 0;
}
