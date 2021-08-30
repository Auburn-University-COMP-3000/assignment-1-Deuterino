#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tempFahrenheit;
    int tempCelsius = 100;

    while (tempFahrenheit != tempCelsius)
    {
        tempFahrenheit = 32 + (9.0/5.0)*tempCelsius;
        tempCelsius--;
        /*cout << "Temperature in Fahrenheit: " << tempFahrenheit << endl;
        cout << "Temperatue in Celsius: " << tempCelsius << endl;*/
    }
        
    cout << "The temperature in Fahrenheit is: " << tempFahrenheit << endl;
    cout << "The temperature in Celsius is: " << tempCelsius << endl;

    return 0;
}