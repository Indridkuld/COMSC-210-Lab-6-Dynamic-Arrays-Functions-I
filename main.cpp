// COMSC-210 | Lab 6 pt 1 | Aidan Woodcock | 2024-09-14
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
    ddArr= new double[SIZE];
    double sum = 0.0;

    enterArrayData(ddArr, SIZE);
    outputArrayData(ddArr, SIZE);
    sumArray(ddArr, SIZE, sum);
    cout << "\n Sum of Values: " << sum << endl;

    delete[] ddArr;

    return 0;
}

// Function definitions
void enterArrayData(double arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << " Enter value for element " << (i + 1) << ": " << endl;
        cin >> *(arr + i);
    };
    cout << "Data entry complete. " << endl;
}

void outputArrayData(double arr[], const int size) {
    cout << " Outputting array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + 1) << " ";  
    }
}

void sumArray(double arr[], const int size, double &sum) {
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
}