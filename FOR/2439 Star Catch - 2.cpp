#include <iostream>
using namespace std;

int main(){
    int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N; j > i; j --)
			cout << " ";
		for (int a = 1; a <= i; a++)
			cout << "*";
		    cout << '\n';

	}
}
