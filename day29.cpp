#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    vector<string> v;
    
    for(int i=0; i < t; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    for(int i=0; i < v.size(); i++){
        bool funny = true;
        string str = v[i];
        for(int j=1; j < str.length(); j++){
            if(abs(str[j] - str[j-1]) != abs(str[str.length()-j-1] - str[str.length()-j])){
                funny = false;
                break;
            }
        }
        if (funny) {
			cout << "Funny" << endl;
		} else {
			cout << "Not Funny" << endl;
		}
    }
    
    return 0;
}
