#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

int main() {
    
    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    double area = 0.0;
    for (int i = 0; i < n; i++) {
        int next = (i + 1) % n;
        area += points[i].x * points[next].y - points[next].x * points[i].y;
    }

    area = abs(area) / 2.0;

    cout << fixed;
    cout.precision(1);
    cout << area << endl;

}
