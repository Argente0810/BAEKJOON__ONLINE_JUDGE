#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

int ccw(Point A, Point B, Point C) {
    int cross_product = (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
    if (cross_product > 0) return 1;  
    if (cross_product < 0) return -1; 
    return 0;                          
}

int main() {
    Point A, B, C;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

    int result = ccw(A, B, C);
    cout << result << endl;
    return 0;
}
