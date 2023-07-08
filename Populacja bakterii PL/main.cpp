#include <iostream>

using namespace std;

int population = 1, hour = 0;

int main()
{
    while(population <= 1000000000)
    {
        hour++;
        population = population * 2;


        if(hour == 1)
        {
            cout << "It took " << hour << " hour.";
        }
        else
        {
            cout << "It took " << hour << " hours.";
        }

        cout << " The bacterial population is " << population << endl;
    }

    return 0;
}
