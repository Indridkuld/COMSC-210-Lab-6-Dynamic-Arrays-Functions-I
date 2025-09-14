// COMSC-210 | Lab 6 pt 1 | Aidan Woodcock | 2024-09-14
// IDE used: Visual Studio Code
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes

double enterArrayData(double arr[], const int size);
int outputArrayData(double arr[], const int size);
void sumArray(double arr[], const int size);

int main() {
    const int SIZE = 5;
    double *ddArr= new double[SIZE];
    double sum = 0.0;

    enterArrayData(ddArr, SIZE);
    outputArrayData(ddArr, SIZE);
    sumArray(ddArr, SIZE);


    return 0;
}

// Function definitions
double enterArrayData(double arr[], const int size) {

    return 0.0;
}

int outputArrayData(double arr[], const int size) {

    return 0;
}

void sumArray(double arr[], const int size) {

}