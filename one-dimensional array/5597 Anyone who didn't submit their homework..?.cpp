#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[31];
    
    for(int i = 1; i <= 28; i++){
        cin >> n;
        arr[n] = 31;
    }
    
    for(int i = 1; i <= 30; i++){
        if(arr[i] != 31){
            cout << i << endl;
        }
    }
}
