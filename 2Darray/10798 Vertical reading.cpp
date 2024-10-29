#include <iostream>

using namespace std;

int main() {
    string lines[5];

    for (int i = 0; i < 5; i++) {
        getline(cin, lines[i]);
    }

    for (int column = 0; column < 15; column++) { 
        for (int row = 0; row < 5; row++) {

            if (column < lines[row].length()) {
                cout << lines[row][column];
            }
        }
    }

    cout << endl;
}
