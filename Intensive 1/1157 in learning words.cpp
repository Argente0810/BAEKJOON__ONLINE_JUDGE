#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    vector<int> count(26, 0);
    
    for(char c : str){
        if(isalpha(c)){
            c = tolower(c);
            count[c - 'a']++;
        }
    }
    
    int maxCount = 0;
    char mostFrequentChar = ' ';
    bool isDuplicate = false;
    
    for(int i = 0; i < 26; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
            mostFrequentChar = 'A' + i;
            isDuplicate = false;
        }
        else if(count[i] == maxCount){
            isDuplicate = true;
        }
    }
    if (isDuplicate) {
        cout << "?" << endl; 
    } else {
        cout << mostFrequentChar << std::endl;
    }
}




