#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>

using namespace std;
int liczba;

int main()
{
    cout << "Za 3 sekundy nastapi losowanie." << endl;
    Sleep(3000);
    srand(time(NULL));
    
    for (int i = 1; i <= 6; i++)
    {
        liczba = rand()%49+1;
        cout << liczba << "\a" << endl;
        Sleep(1000);
    }
    getchar();
    return 0;
}