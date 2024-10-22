#include <iostream>
using namespace std;

int main(){
    int a;
    int max = 0;
    int arr[9];
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(arr[i] >= max){
            max = arr[i];
            a = i + 1;
        }
    }
    cout << max << endl;
    cout << a << endl;
}
