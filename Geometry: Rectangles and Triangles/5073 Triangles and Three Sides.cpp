#include <iostream>
using namespace std;

int main() {
    while(true){
        int a, b, c;
    
        cin >> a >> b >> c;
    
        if(a == 0 && b == 0 && c == 0){
            break;
        }
    
        if(a + b > c && a + c > b && b + c > a){
            if(a == b && a == c){
                cout << "Equilateral" << endl;
            }
            else if(a == b || b == c || a == c){
                cout << "Isosceles" << endl;
            }
            else{
                cout << "Scalene" << endl;
            }
        }
        else{
            cout << "Invalid" << endl;
        }
    }
}
