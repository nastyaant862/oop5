﻿#include <iostream>
#include "oop5 dinmass.h"
using namespace std;

double * NewMass(int N) {
	double* m = new double[N];
    return m;
}

void ToFill(double *m, int N) {
    for (int i = 0; i < N; i++) {
        cout << "Введите значение " << i+1 << "-й ячейки: ";
        cin >> m[i];
    }
}

void Print(double* m, int N) {
    cout << "Ваш массив:" << endl;
    for (int i = 0; i < N; i++) {
        cout << m[i] << "; ";
    }
    cout << endl;
}

void Delete(double* m) {
    delete[] m;
}