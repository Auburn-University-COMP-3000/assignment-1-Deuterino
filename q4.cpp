#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double specificWeight = 62.4;
    double weightSphere;
    double radiusSphere;
    double volumeSphere;
    double bouyantForce;

    cout << "Input the weight of the sphere in pounds: " << endl;
    cin >> weightSphere;
    cout << "Input the radius of the sphere in feet: " << endl;
    cin >> radiusSphere;

    volumeSphere = ((4/3)*M_PI)*radiusSphere*radiusSphere*radiusSphere;
    bouyantForce = volumeSphere * specificWeight;

    if (bouyantForce >= weightSphere)
    {
        cout << "The sphere will float in water." << endl;
    }
    else
    {
        cout << "The sphere will sink in water." << endl;
    }
    return 0;
}