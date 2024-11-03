#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, r = 0, t, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        for(int j = 1; j <= t; j++){
            if(t%j == 0){
                c++;
            }
        }
            if(c == 2){
                r++;
            }
            c = 0;
    }
    cout << r <<'\n';
}
