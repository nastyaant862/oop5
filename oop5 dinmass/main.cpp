#include <iostream>
#include "oop5 dinmass.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int N;
    bool f;

    cout << "������� ����� ������? 1 � ���� ��, 0 � ���� ���: ";
    cin >> f;

    while (f) {
        cout << "������� ������ �������: ";
        cin >> N;

        double *mass = NewMass(N);
        ToFill(mass, N);
        Print(mass, N);
        Delete(mass);

        cout << endl;
        cout << "������� ����� ������? 1 � ���� ��, 0 � ���� ���: ";
        cin >> f;
    }
}