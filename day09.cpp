#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    if(a == b) return a;
    else return find_gcd(max(a,b) - min(a,b), min(a,b));
}
int main() {
    int a,b;
    cin >> a >> b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}
