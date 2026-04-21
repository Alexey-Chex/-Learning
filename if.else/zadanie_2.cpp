#include <iostream>
using namespace std;

int main(){
    int first, second;
    cout << "first = ";
    cin >> first;

    cout << "second = ";
    cin >> second;

    if(second != 0){
        if(first % second == 0){
            cout << first << " / " << second << " = " << first / second << " delenie bez ostatka";
        }
        else {
            cout << first << " / " << second << " = " << first / second << " delenie s ostatkom";
        }
    }
    else{
        cout << "delenie na 0!!";
    }

}