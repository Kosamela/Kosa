#include <iostream>
 
using namespace std;
int uczniowie, jablka, x, y;

int main()
{
    cout << "Ile osob jest w klasie:";
    cin >> uczniowie;
    cout << "Ile jablek kupila mama:";
    cin >> jablka;
    x = jablka / (uczniowie -1);
    cout << "Jablek dla kazdego: " << x;
    y = jablka - x*(uczniowie - 1);
    cout << endl << "Dla jasia zostanie: " << y;
    return 0;
}