#include <iostream>
using namespace std;

int main() {
    double dollar;
    double rubli;

    cout << "Vvedite kurs dollara and summa:";
    cin >> dollar >> rubli;

    const double result = rubli / dollar; 
    cout << rubli << " rubl = " << result << " dollars";
    return 0;
}