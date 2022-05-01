#include <iostream>
#include "oop5 dinmass.h"

using namespace std;

int main()
{
    int N;
    bool f;

    cout << "Create new array? 1 - yes, 0 - no: ";
    cin >> f;

    while (f) {
        cout << "Enter array size: ";
        cin >> N;

        double *mass = NewMass(N);
        ToFill(mass, N);
        Print(mass, N);
        Delete(mass);

        cout << endl;
        cout << "Create new array? 1 - yes, 0 - no: ";
        cin >> f;
    }
}