#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14;
    double r;

    cout << "Vvedite radius: ";
    cin >> r;
    const double S = pi*(r*r);

    cout << "Ploshad kruga: S = " << S << " m2";
    return 0;
}