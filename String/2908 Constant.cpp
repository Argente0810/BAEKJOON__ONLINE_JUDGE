#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    
    cin >> a >> b;
    
    string ra = string(a.rbegin(), a.rend());
    string rb = string(b.rbegin(), b.rend());
    
    int ia = stoi(ra);
    int ib = stoi(rb);
    
    cout << max(ia, ib) << endl;
}
