#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Podaj kod PIN: ";
    cin >> PIN;
    if (PIN == "1234") cout << "Prawidłowy PIN!";
    else cout << "Nieprawidłowy PIN!";
}