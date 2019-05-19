#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double x, z, A;
	const int y = 1.10;
	cout << "x = "; cin >> x;
	cout << "z = "; cin >> z;	
	
	A = (x * y) + z;
	cout << "A = (x * y) + z\n";
	cout << "Ans: " << A;
	getch();
	return 0;
}
