#include <iostream>
 using namespace std;
 
int main() {
	int a, b, c;
	cin >> a >> b >> c;
 
	int min = 60 * a + b;
	min += c;
 
	int h = (min / 60) % 24;
	int m = min % 60;
 
	cout << h << " " << m;
}
