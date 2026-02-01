/*written by Kimberly Casares     DATE: 2/21/2025
this program is designed to take a given set of numbers
and sort them from smallest to biggest. */

#include <iostream>
#include <cstdlib>  // for atof()

using namespace std;

void MySort(double X[], int n) {
    int i, j;
    double temp;
    
    for (i = 1; i < n; i++) {
        temp = X[i];
        j = i - 1;
        
        while (j >= 0 && X[j] > temp) {
            X[j + 1] = X[j];
            j = j - 1;
        }
        X[j + 1] = temp;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "provide numbers as command line arguments" << endl;
        return 1;
    }
    
    if (argc > 21) {
        cout << "Too many numbers. Maximum allowed is 20" << endl;
        return 1;
    }
    //this is the array
    int n = argc - 1;
    double X[21];
    
    for (int i = 0; i < n; i++) {
        X[i] = atof(argv[i + 1]);
    }
    
    MySort(X, n);
    
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
    
    return 0;
}

