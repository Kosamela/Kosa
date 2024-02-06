#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;
int liczba, zgadnij, proba=1;

int main()
{
    cout<<"Zgadnij liczbe z zakresu od 1 do 100: "<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    while (liczba!=zgadnij)
    {
        cout<<"To twoja "<<proba<<" proba:";
        cin>>zgadnij;
        proba++;
        if (liczba>zgadnij) cout<<"To za malo."<<endl;
        else if (liczba < zgadnij) cout<<"To za duzo."<<endl;
        else cout<<"Zgadles! To byla Twoja "<<proba<<" proba.";
    }
    getchar();
    return 0;
}