#include <iostream>

using namespace std;
string slowo;

int main()
{
    cout << "Nie pisz slowa: Kuba" << endl;
    while (slowo != "Kuba")
    {
        cin >> slowo;
        if (slowo != "Kuba") cout << "Nie napisales, gramy dalej" << endl;
    }
    cout << "Napisales, koniec gry.";
    
}