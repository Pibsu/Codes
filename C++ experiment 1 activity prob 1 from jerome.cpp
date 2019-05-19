#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double box = 250;
	double side = 100;
	double prem = 50;
	double gen = 25;

	cout << "Number of Box Tickets sold at price P250.00 " << endl;
	cin >> box;
	cout << "Number of BOX tickets"  << "         " << "P" << 250*box << endl;
	cout << " " << endl;

	cout << "Number of Sideline Tickets sold at price P100.00 " << endl;
	cin >> side;
	cout << "Number of side tickets"  << "         "<< "P"  << 100*side << endl;
	cout << " " << endl;

	cout << "Number of Premium Tickets sold at price P50.00 " << endl;
	cin >> prem;
	cout << "Number of Premium tickets"  << "         "<< "P"  << 50*prem << endl;
	cout << " " << endl;

	cout << "Number of General Admission Tickets sold at price P25.00 " << endl;
	cin >> gen;
	cout << "Number of General Admission tickets"  << "         "<< "P"  << 25*gen << endl;
	cout << " " << endl;

	cout << "Total number of Tickets Sold" << "         " << box+prem+side+gen << endl;
	cout << "Total Sales" <<  "         " << "P" << box*250+side*100+prem*50+25*gen << endl;

	_getch();
	return 0;
}
