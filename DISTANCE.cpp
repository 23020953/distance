// Including necessary libraries for input/output and mathematical functions
#include <iostream>
#include <cmath>

using namespace std;

// Defining a function to compute the Euclidean distance between two points given their coordinates
double calculateDistance(double x1, double y1, double x2, double y2) {
    // Using the distance formula: square root of the sum of squares of the differences in coordinates
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// The main function where the program execution begins
int main() {
    // Declaring variables to store coordinates of two points
    double x1, y1, x2, y2;

    // Prompting the user to enter the coordinates of the two points
    cout << "Calculate the Euclidean distance between two points" << endl << endl;
    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << endl;

    cout << "Enter the value of x2: ";
    cin >> x2;
    cout << endl;

    cout << "Enter the value of y1: ";
    cin >> y1;
    cout << endl;

    cout << "Enter the value of y2: ";
    cin >> y2;
    cout << endl;

    // Displaying the calculated Euclidean distance between the two points
    cout << "Euclidean distance between point 1 and point 2: " << calculateDistance(x1, y1, x2, y2) << endl;

    // Indicating successful termination of the program
    return 0;
}

