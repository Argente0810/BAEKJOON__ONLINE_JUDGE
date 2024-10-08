#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x, y, w, h;
    
    cin >> x >> y >> w >> h;
    
    int left = x;
    int right = w - x;
    int top = h - y;
    int bottom = y;
    
    int answer = min({left, right, top, bottom});
    
    cout << answer << endl;

}
