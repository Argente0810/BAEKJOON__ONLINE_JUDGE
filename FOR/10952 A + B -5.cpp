#include <iostream>
using namespace std;

int main(){
    int a, b = 0;
    
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        else{
            cout << a + b << endl;
        }
    }
}
