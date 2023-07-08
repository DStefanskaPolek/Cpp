#include <iostream>
#include <iomanip>

using namespace std;

long double FibonacciSequence[100000];
int howManyNumbers;
float goldenRatio = 0;


int main()
{
    cout << "How many Fibonnaci numbers should I print on the screen? ";
    cin >> howManyNumbers;
    cout << endl;

    // It allows to display numbers with greater precision
    cout << setprecision(10000);

    // The loop defines the first two numbers of the sequence as 0 and 1
    // and constructs the next ones as follows
    for (int i = 0; i < howManyNumbers; i++)
    {   if (i == 0)
        {
           FibonacciSequence[i] = 0;
        }

        else if (i == 1)
        {
            FibonacciSequence[i] = 1;
        }

        else
        {
        FibonacciSequence[i] = FibonacciSequence[i - 1] + FibonacciSequence[i - 2];
        }
        cout << FibonacciSequence[i] << " ";
    }

    // At the very end, the proportion of the last two numbers of the displayed Fibonacci sequence is calculated
    goldenRatio = FibonacciSequence[howManyNumbers-1] / FibonacciSequence[howManyNumbers - 2];
    cout << endl << "The golden ratio of the last two numbers of this range is: " << goldenRatio;

    cout << endl;

    return 0;
}
