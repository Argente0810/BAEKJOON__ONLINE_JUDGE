#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str){
    
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    
    return str == reversedStr;
}

int main() {
    string a;
    getline(cin, a);
    
    if(isPalindrome(a)){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }

}
