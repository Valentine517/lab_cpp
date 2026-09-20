#include <iostream>
using namespace std;

int main() {
    // задача Begin48
    // декларація змінних
    double a, b, G2;

    // введення змінних
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // розрахунок результату
    G2 = a * b;

    // виведення результату
    cout << "Square of geometric mean: " << G2 << endl;

    // задача Begin32
    // декларація змінних
    double R, D, S;
    const double pi = 3.14;

    // введення змінної
    cout << "Begin32" << endl;
    cout << "Enter R: ";
    cin >> R;

    // розрахунок результату
    D = 2 * R;
    S = (pi * R * R) / 4;

    // виведення результату
    cout << "Diameter: " << D << endl;
    cout << "Area: " << S << endl;

    // задача Begin37
    cout << "--- Task Begin37 ---" << endl;

    // декларація змінних
    double x, y, H;

    // введення змінної a
    cout << "Enter number a: ";
    cin >> x;

    // введення змінної b
    cout << "Enter number b: ";
    cin >> y;

    // розрахунок результату
    H = (2 * x * y) / (x + y);

    // вивід результату 
    cout << "Harmonic mean H = " << H << endl;

    return 0;
}
