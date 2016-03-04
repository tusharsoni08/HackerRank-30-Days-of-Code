#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
  int t, n, b;
  cin >> t;
  string str;
  char ch;
  for(int i=0; i < t; i++){
    cin >> n;
    stringstream ss;
    string s = "";
    while(n > 0){
      ss.str(string());
      ss.clear();
      b = n%2;
      ss << b;
      ss >> ch;
      s += ss.str();
      n /= 2;
      
    }
    for(int j = s.size()-1; j >= 0 ; j--){
      cout << s[j];
    }
    cout << '\n';
  }

  return 0;
}
