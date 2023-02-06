// CSCI 1300 Spring 2023
// Author: Jeremiah Heredia
// Recitation: 102  – Tuan Tran
// Homework 2 - Problem # 4

#include <iostream>
using namespace std;

int main()
{
    // initial snow depth at each city
    int snowBreckenridge = 25;
    int snowVail = 28;
    int snowCopperMountain = 40;
    
    // snowfall rates and melt rates for each city
    int snowfallRateBreckenridge = 10, meltRateBreckenridge= 5;
    int snowfallRateVail = 14, meltRateVail = 2;
    int snowfallRateCopperMountain = 5, meltRateCopperMountain = 3;
   
    // input the number of days
    cout << "How many days in the future would you like a prediction for? " <<endl;
    int days; 
    cin >> days;
    
    // update the snow depth, keeping in mind that snow depth can't be negative
    int updatedSnowBreckenridge = snowBreckenridge + days*(snowfallRateBreckenridge-meltRateBreckenridge);
    int updatedSnowVail = snowVail+ days*(snowfallRateVail-meltRateVail);
    int updatedSnowCopperMountain = snowCopperMountain + days* (snowfallRateCopperMountain - meltRateCopperMountain);
    
    //print the snow depths for each city
    cout << "Breckenridge will have " << updatedSnowBreckenridge << " inches, ";
    cout << "Vail will have " <<updatedSnowVail << " inches, ";
    cout <<"and Copper Mountain will have " << updatedSnowCopperMountain << " inches.";
    return 0;
}
