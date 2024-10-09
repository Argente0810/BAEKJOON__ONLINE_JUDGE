#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isGroupWord(const string& word) {
    set<char> seen; 
    char lastChar = '\0'; 

    for (char c : word) {
        if (c != lastChar) {
            if (seen.count(c)) {
                return false;
            }
            seen.insert(c);
            lastChar = c;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int groupWordCount = 0;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        if (isGroupWord(word)) {
            groupWordCount++; 
        }
    }

    cout << groupWordCount << endl; 
    return 0;
}
