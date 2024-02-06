#include <iostream>

using namespace std;
int ilosc;
int galezie = 1;

int main()
{
    cout << "Jak wysoka ma byc gorka: ";
    cin >> ilosc;
    do
    {
        if (ilosc == 0)
        {
            return 0;
        }
        else
        {
        string str(galezie,'*');
        cout <<  str << endl;
        galezie++;
        ilosc--;
        }
    } while (ilosc > 0);
    
}