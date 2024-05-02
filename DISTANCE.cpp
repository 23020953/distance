
#include <iostream>
#include <cmath>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
   
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
 
    double x1, y1, x2, y2;

    
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

    
    cout << "Euclidean distance between point 1 and point 2: " << calculateDistance(x1, y1, x2, y2) << endl;

    
    return 0;
}

