/** Jennifer Byrne
    20/09/2017
    Lab 3
    Standard Deviation */

/** Preprocessor directives */
#include <iostream>
#include <math.h>
#include <iomanip>

/** Enables cout, cin and endl */
using namespace std;

/** Main function */
int main()
{
    /** Initialising variables */
    double array[10]={0}, sum=0, mean=0, standdev=0;
    int i;

    /** Specifies the number of decimal points to ce displayed in answer */
    cout << fixed;
    cout << setprecision(2);

    /** Conditions for for loop
        Read in values for array[10]
        Get the total of all values in array */
    for(i=0; i<10; i++)
    {
        cout << "Enter value " << i+1 << "\t" ;
        cin  >> array[i];
        sum = sum + array[i];
    }

    /** Equation for calculating mean */
    mean = sum/10;

    /** Display mean calculation on console */
    cout << "\n" << "Mean : " << "\t" << mean << endl;

    /** Equation for calculation standard deviation */
    standdev = sqrt(pow(sum - mean, 2) / 9.0);

    /** Display standdev on console */
    cout << "\n" << "Standard Deviation : " << "\t" << standdev << endl;

    /** Terminate main function */
    return 0;
}
