#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;
    istringstream stream(str);
    string word;

    while (stream >> word) {
        count++;
    }

    cout << count << endl;
}
