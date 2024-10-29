#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<bool>> canvas(100, vector<bool>(100, false));
    int area = 0;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;


        for (int dx = 0; dx < 10; dx++) {
            for (int dy = 0; dy < 10; dy++) {
                if (!canvas[y + dy][x + dx]) { 
                    canvas[y + dy][x + dx] = true;
                    area++;
                }
            }
        }
    }

    cout << area << endl;
}
