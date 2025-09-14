// COMSC-210 | Lab 6 pt 1 | Aidan Woodcock | 2025-09-14
// IDE used: Visual Studio Code
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void enterArrayData(double arr[], const int size);
void outputArrayData(double arr[], const int size);
void sumArray(double arr[], const int size, double &sum);

int main() {
    const int SIZE = 5;
    double *ddArr = nullptr;
    ddArr = new double[SIZE]; // dynamically allocate array
    double sum = 0.0;

    enterArrayData(ddArr, SIZE);
    outputArrayData(ddArr, SIZE);
    sumArray(ddArr, SIZE, sum);
    cout << "Sum of Values: " << sum << endl; 

    delete[] ddArr; // free dynamically allocated memory

    return 0;
}
// Function definitions
// enters array data through console input using pointers.
void enterArrayData(double arr[], const int size) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}
// outputs array data using pointers. outputs simple spaced list 
void outputArrayData(double arr[], const int size) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++) { // output array using pointers
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
// sums array data using pointers. returns sum by reference
void sumArray(double arr[], const int size, double &sum) {
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
}