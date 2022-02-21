// Ryan Bieker, CS 3060 001, Chapter 3 Programming Challenges, due 2/8/2022, 
//calculates average rainfall over 3 months

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    //initialize months
    string monthOne;
    string monthTwo;
    string monthThree;

    //initialize rain fall
    double rainOne;
    double rainTwo;
    double rainThree;
    double  averageRain;

    //month one
    cout << "Enter month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainOne;

    //month two
    cout << "Enter month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainTwo;

    //month three
    cout << "Enter month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainThree;

    //average rain over 3 months
    averageRain = (rainOne + rainTwo + rainThree) / 3;

    //output average
    cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree << " is ";
    cout << setprecision(3) << averageRain << " inches.";
}