#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double hour;
	double rate;

	cout << fixed << showpoint;

	cout << "How many hours do you Work per Week?" << endl;
	cin >> hour;

	cout << "How much do you earn per hour?" << endl;
	cin >> rate;

	cout << "a. Your income before and after taxes from your summer job." << endl;
	cout << "Before Tax    " << setprecision(2)   << hour*rate<< endl;
	cout << "After Tax    " << setprecision(2)  << hour*rate*.86 << endl;
	cout << "         " << endl;

	cout << "b. The money you spend on clothes and other accessories." << endl;
	cout << "After Buying Clothes and Other Accessories    " << setprecision(2)   << (hour*rate*.86)*.10 << endl;
	cout << "         " << endl;

	cout << "c. The money you spend on school supplies." << endl;
	cout << "After Buying School Supplies   " << setprecision(2)   << ((hour*rate*.86)*.90)*.01 << endl;
	cout << "         " << endl;

	cout << "d. The money you spend to buy savings bonds." << endl;
	cout << "After Buying Savings Bonds   " << setprecision(2)   << (((hour*rate*.86)*.90)*.90)*.25 << endl;
	cout << "         " << endl;

	cout << "e. The money your parents spend to buy additional savings bonds for you." << endl;
	cout << "After Buying School Supplies   " << setprecision(2)   << ((((hour*rate*.86)*.90)*.90)*.75)*.5 << endl;
	

	_getch();
	return 0;
}
