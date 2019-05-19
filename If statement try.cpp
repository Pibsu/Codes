#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter First Number: " ; cin >> a; 
	cout << "Enter Second Number: " ; cin >> b;
	if (a < b)
		cout << "First Number is less than second. \n";
	else
		cout << "Second number is less than first. \n";
	return 0;
}
