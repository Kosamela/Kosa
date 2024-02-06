#include <iostream>

using namespace std;

string login;
string haslo;

int main()
{
    cout << "Podaj login:";
    cin >> login;
    cout << "Podaj haslo:";
    cin >> haslo;
    if (login == "kamil" && haslo == "kosmela") cout << "Jestes zalogowany.";
    else if (login != "kamil" && haslo == "kosmela") cout << "Podales zly login.";
    else if (login == "kamil" && haslo != "kosmela") cout << "Podales zle haslo.";
    else cout << "Podales zly login i haslo";
}