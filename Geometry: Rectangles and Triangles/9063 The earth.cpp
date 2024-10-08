#include <iostream>
using namespace std;

int main() {
    int a;
    
    cin >> a;

    int x, y;
    cin >> x >> y;

    int x_min = x;
    int x_max = x;
    int y_min = y;
    int y_max = y;

    for (int i = 1; i < a; ++i) {
        cin >> x >> y;

        if (x < x_min) x_min = x;
        if (x > x_max) x_max = x;
        if (y < y_min) y_min = y;
        if (y > y_max) y_max = y;
    }

    int answer = (x_max - x_min) * (y_max - y_min);
    cout << answer << endl;
    
}
