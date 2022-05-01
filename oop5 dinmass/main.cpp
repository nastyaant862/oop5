#include <iostream>
#include "oop5 dinmass.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int N;
    bool f;

    cout << "—оздать новый массив? 1 Ч если да, 0 Ч если нет: ";
    cin >> f;

    while (f) {
        cout << "¬ведите размер массива: ";
        cin >> N;

        double *mass = NewMass(N);
        ToFill(mass, N);
        Print(mass, N);
        Delete(mass);

        cout << endl;
        cout << "—оздать новый массив? 1 Ч если да, 0 Ч если нет: ";
        cin >> f;
    }
}