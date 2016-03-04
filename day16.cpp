#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, data;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> data;
        v.push_back(data);
    }
    
    sort(v.begin(), v.end());
    int minDiff = 20000000;
    vector<int> index;
    for(int j=1; j < n; j++){
        if(minDiff > abs(v[j] - v[j-1])){
            minDiff = abs(v[j] - v[j-1]);
        }
    }
    
    for(int k=1; k < n; k++){
        if(minDiff == abs(v[k] - v[k-1]))
            cout << v[k-1] << " " << v[k] << " ";
    }
    
    
    return 0;
}
