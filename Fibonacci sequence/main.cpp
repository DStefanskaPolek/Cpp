#include <iostream>
#include <iomanip>

using namespace std;    //unless it's strictly necessary, avoid scoping libraries globally. it also makes it easier for someone else to read if you only scope locally

//avoid global variables
long double FibonacciSequence[100000];    //this can be allocated after line 15. why is it a long double anyway? we're only working with int's
int howManyNumbers;    //only used at line 15 and 23, and could arguably be used to initialize the FibonacciSequence array, could just have it as a local variable there
float goldenRatio = 0;    //don't need this until the end, no need to have it around for the entire run


int main()
{
    cout << "How many Fibonnaci numbers should I print on the screen? ";
    cin >> howManyNumbers;
    cout << endl;

    // It allows to display numbers with greater precision
    cout << setprecision(10000);    //not sure if this does what you think, since we don't need any precision when we're working with int's.
                                    //it's also changing properties of cout itself, probably better with a function that formats numbers if you need

    // The loop defines the first two numbers of the sequence as 0 and 1
    // and constructs the next ones as follows
    for (int i = 0; i < howManyNumbers; i++)    //here you could start with i = 2, since 0 and 1 are known: for (int i = 2, FibonacciSequence[0] = 0, FibonacciSequence[1] = 1; i < howManyNumbers; i++)
    {                                           //that would save you the entire if-tree and only leave you with the one line where it calculates the next number
        if (i == 0)    //easier to read with everything on their own line
        {
           FibonacciSequence[i] = 0;
        }

        else if (i == 1)
        {
            FibonacciSequence[i] = 1;
        }

        else
        {
            FibonacciSequence[i] = FibonacciSequence[i - 1] + FibonacciSequence[i - 2]; //just fixed an indent
        }
        cout << FibonacciSequence[i] << " ";
    }

    // At the very end, the proportion of the last two numbers of the displayed Fibonacci sequence is calculated
    goldenRatio = FibonacciSequence[howManyNumbers-1] / FibonacciSequence[howManyNumbers - 2];
    cout << endl << "The golden ratio of the last two numbers of this range is: " << goldenRatio;

    cout << endl;

    return 0;
}
