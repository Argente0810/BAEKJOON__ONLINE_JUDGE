#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    
    cin >> a >> b;
    
    c = b % 10; //1의 자리
    d = (b % 100) / 10; //10의 자리
    e = b / 100;    //100의 자리
    
    cout << a * c << endl;
    cout << a * d << endl;
    cout << a * e << endl;
    cout << a * b << endl;
    
}
