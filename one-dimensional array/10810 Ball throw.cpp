#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int arr[100];

    
    for (int i = 0; i < N; i++) {
        arr[i] = 0; 
    }

    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        for (int j = A - 1; j < B; j++) {
            arr[j] = C;
        }
    }

    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
