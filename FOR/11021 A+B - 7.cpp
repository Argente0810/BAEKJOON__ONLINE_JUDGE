#include <iostream>
using namespace std;

int main(){
    int t, a, b = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << endl;
    }
}