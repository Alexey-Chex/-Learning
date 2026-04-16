#include <iostream>
using namespace std;

int main()
{
    int weight, s_height;
 
    cout << "Vvedite ves and rost: "; 
    cin >> weight >> s_height;
    const double m_height = s_height / 100.0;
    const double IMT = weight / (m_height * m_height);
    cout << "IMT = " << IMT;
}