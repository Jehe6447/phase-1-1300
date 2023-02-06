// CSCI 1300 Spring 2023
// Author: Jeremiah Heredia
// Recitation: 102  – Tuan Tran
// Homework 2 - Problem # 2

#include <iostream>
using namespace std;
int main()
{
    //declare a character array to hold user name
    char name [50];
    // print message to user to enter name
    cout << "Please enter your name below:" << endl;
    // get input from user to name []
    cin >> name;
    // print the name back with Hello
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
