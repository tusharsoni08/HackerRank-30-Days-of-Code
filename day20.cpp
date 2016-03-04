#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

bool IsPunct(char& c){
    return ispunct(c);
}

int main() {
    string line, word;
    vector<string> v;
    getline(cin, line);

    replace_if(line.begin(), line.end(), IsPunct, ' ');
    
    stringstream ss(line);
    while(ss >> word){
        v.push_back(word);
    }

    cout << v.size();
    for(string w : v){
        cout << endl;
        cout << w;
    }   
    return 0;
}
