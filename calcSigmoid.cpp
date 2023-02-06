// CSCI 1300 Spring 2023
// Author: Jeremiah Heredia
// Recitation: 102  – Tuan Tran
// Homework 2 - Problem # 6

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x;
    double sig;
    cout << "Enter a value for x:"<< endl;
    cin >> x;
    sig = 1/(1+exp(-x));
    cout << "The sigmoid for x=" << x << " is " << sig;
    return 0;
}
