#include <iostream>
using namespace std;

int main(){
    int n, a, b = 0;
    
    cin >> n >> a;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] < a){
        cout << arr[i] << " ";
        }
    }
    
}
