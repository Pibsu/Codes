#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{
	double avgDB, netBal, d1, pay, d2, interest;
	char currency;
	
	cout << "Please enter the following: \n";
	cout << "Net Balance <space> Payment <space> Currency <space> Number of days in Billing Cycle <space> Number of days Payment was made before Billing Cycle"<< endl;
	cin >> netBal >> pay >> currency >> d1 >> d2;
		//Calculations
		avgDB = ( netBal * d1 - pay * d2 ) / d1;
		interest = (avgDB * 0.0152);
	cout << "Net Balance: " << currency << netBal << endl;
	cout << "Payment: " << currency << pay << endl;
	cout << "Number of days in Billing Cycle: " << d1 << "Days" <<endl;
	cout << "Number of days Payment was made before Billing Cycle: " << d2 << "Days" << endl;
	cout << "Average Daily Balance: " << avgDB << currency << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Interest: " << currency << interest << endl; 
	
	return 0;
}
