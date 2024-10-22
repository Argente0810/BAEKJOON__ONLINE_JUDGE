#include <iostream>
using namespace std;

int main(){
    
    int arr[42] = {};	
	
	int n;
	for(int i = 0; i < 10; i++) {
		cin >> n;
		arr[n % 42]++;	
	}
 
	int result = 0;

	for(int v : arr) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
    
}
