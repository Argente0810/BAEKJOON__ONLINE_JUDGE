#include<iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if ((h == 0) && (m < 45)) {
		h = 23;
		m = 60 + m - 45;
		cout << h << " " << m << endl;
	}
	else if (m < 45) {
		h = h - 1;
		m = 60 + m - 45;
		cout << h << " " << m << endl;
	}
	else if (m >= 45) {
		m = m - 45;
		cout << h << " " << m << endl;
	}
    else if ((h == 24) && (m >= 45)){
        h = 0;
        m = m - 45;
        cout << h << " " << m << endl;
    }
}
