#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int a = 32;
    int t;
    int dist;

    cout << "Enter a time in seconds." << endl;
    cin >> t;

    dist = (a*pow(t,2))/2;

    cout << "An object in freefall for " << t << " seconds will fall " << dist << " feet.";

    return 0;
}