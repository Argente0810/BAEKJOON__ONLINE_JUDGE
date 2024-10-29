#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N; 

    vector<vector<int>> A(M, vector<int>(N));
    vector<vector<int>> B(M, vector<int>(N));
    vector<vector<int>> C(M, vector<int>(N));

  
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

}
