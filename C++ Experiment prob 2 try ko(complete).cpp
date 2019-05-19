#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double mass, density, volume;
	
	//Input
	cout << "Please input: mass <space> density of the object" << endl;
		cin >> mass >> density;
	//Formula
		volume = ((density/4)*mass);
	//Output/Display
	cout << "Mass: " << mass << "g" << endl;
	cout << "Density: " << density << "g/cm^3 \n";
	cout << setprecision(2) << fixed << showpoint;
	cout << "Volume: " << volume << "cm^3" << endl;
	 
	return 0;
}
