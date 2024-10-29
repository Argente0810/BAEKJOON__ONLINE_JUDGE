#include <iostream>

using namespace std;

int main() {
    int arr[9][9];
    int value = 0;
    int row = 0, column = 0;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
            
            if(arr[i][j] > value){
                value = arr[i][j];
                row = i;
                column = j;
            }
        }
    }
    
    cout << value << endl;
    cout << row + 1 << " " << column + 1 << endl;

}
