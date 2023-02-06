// CSCI 1300 Spring 2023
// Author: Jeremiah Heredia
// Recitation: 102  – Tuan Tran
// Homework 2 - Problem # 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double length,height,ounces,cubicinches;
    cout << "What is the side length of the base of the carton in inches?"<< endl;
    cin >> length;
    cout << "What is the height of the carton in inches?" << endl;
    cin >> height;
    cubicinches = length*length*height;
    ounces = 0.55*cubicinches;
    cout << "The carton has a volume of " <<setprecision(1) << fixed << ounces << " ounces." << endl;
    return 0;
}
