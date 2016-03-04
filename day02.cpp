#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double M;
    int T, X;
     cin >> M >> T >> X;
    double meal, tip, tax, finalP, price;
    meal = M;
    tip = (M*T)/100;
    tax = (M*X)/100;
    
    finalP = M + tip + tax;
    
    if(finalP <= (2*floor(finalP) + 1)/2)
        price = floor(finalP);
    else 
        price = ceil(finalP);
    cout << "The final price of the meal is $" << price << ".";
    
    
    return 0;
}
