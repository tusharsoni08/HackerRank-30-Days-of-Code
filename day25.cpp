#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; i <= sqrt(number); i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

int main() {
    int t, n;
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> n;
        if(isPrime(n)){
            cout << "Prime" << endl;
        }else
            cout << "Not prime" << endl;
    }
        
    
    return 0;
}
