#include <iostream>

using namespace std;
int ilosc;

int main()
{   
    cout << "Ile chcesz kwadratow: ";
    cin >> ilosc;
    for (int i = 1; i <= ilosc; i++)
    {
        cout << i << ". +--+" << endl;
        cout << "   |  |" << endl;
        cout << "   +--+" << endl;
    }
}