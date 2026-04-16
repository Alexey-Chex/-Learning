#include <iostream>
using namespace std;

int main() {
    int metr;
    cout << "Vvedite rastoyanie v metrax: ";
    cin >> metr;

    cout << metr / 1000 << " kilometrs and " << metr % 1000 << " metrov";
    return 0;
}