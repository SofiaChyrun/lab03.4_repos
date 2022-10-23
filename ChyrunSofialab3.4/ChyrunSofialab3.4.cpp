// ChyrunSofialab3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; 
    double y;
    double R; 
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if ((x>0 && y>0 && y<=x && y<= sqrt(pow(R,2) - pow((x - R),2)) + R ) ||
        (x<0 && y<0 && y>= x && y <= sqrt(pow(R, 2) - pow((x + R),2)) - R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}