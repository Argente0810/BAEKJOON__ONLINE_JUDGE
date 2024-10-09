#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int n = 0;
    for(size_t i = 0; i < str.length(); i++){
        if(i < str.length() - 1){
            if((str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) ||
            (str[i] == 's' && str[i + 1] == '=') ||
            (str[i] == 'z' && str[i + 1] == '=') ||
            (str[i] == 'd' && str[i + 1] == '-')){
                n++;
                i++;
                continue;
            }
        }
        if((str[i] == 'l' && str[i + 1] == 'j') ||
        (str[i] == 'n' && str[i + 1] == 'j')){
            n++;
            i++;
            continue;
        }
        if (str[i] == 'd' && i < str.length() - 2 && str[i + 1] == 'z' && str[i + 2] == '=') {
                n++;
                i += 2;
                continue;
        }
        n++;
    }
    cout << n << endl;
}
