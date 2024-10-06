#include<iostream>
using namespace std;

int main(){
  int a,b,c,d;

  cin >> a;

  b = a % 4;
  c = a % 100;
  d = a % 400;

  if((b == 0) && (c != 0)){
    cout << "1" << endl;
  }
  else if((d == 0) && (c == 0)){
    cout << "1" << endl;
  }
  else
    cout <<"0" << endl;
  
}
