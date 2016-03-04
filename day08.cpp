#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>
#include <sstream>
using namespace std;


int main() {
  int n, phno;
  string name, query;
  cin >> n;
  map<string, int> myMap;
  for(int i=0; i < n; i++){
    cin.ignore();
    getline(cin, name);
    cin >> phno;
    if(name != "")
    myMap.insert(pair<string, int>(name, phno));
  }
  cin.ignore();
  while(getline(std::cin, query)){ 
    if(myMap.find(query) != myMap.end()){
      cout << query << "=" << myMap[query] << endl;
    }else
      cout << "Not found" << endl;
      
  }

  return 0;
}
