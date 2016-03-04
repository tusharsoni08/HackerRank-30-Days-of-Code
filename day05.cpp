#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, n, t;
    cin >> t;
    
    for(int j=0; j< t; j++){
        cin >> a >> b >> n;
        int sum = a;
        for(int i=0; i < n; i++){
            sum += (pow(2, i)*b);
            cout << sum << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
