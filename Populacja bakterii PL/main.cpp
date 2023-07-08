#include <iostream>

using namespace std;

int populacja = 1, godzin = 0;

int main()
{
    while(populacja <= 1000000000)
    {
        godzin++;
        populacja = populacja * 2;


        if(godzin == 1)
        {
            cout << "Minela " << godzin << " godzina.";
        }
        else if ((godzin <= 4) || (godzin >= 20) && (godzin % 10 == 2) || (godzin >= 20) && (godzin % 10 == 3) || (godzin >= 20) && (godzin % 10 == 4))
        {
            cout << "Minely " << godzin << " godziny.";
        }
        else
        {
            cout << "Minelo " << godzin << " godzin.";
        }


        //cout << "Minelo " << godzin << " godzin.";
        cout << " Liczba bakterii wynosi " << populacja << endl;
    }

    return 0;
}
