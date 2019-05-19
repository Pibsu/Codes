#include <iostream>
using namespace std;

int main()
{
	int tixpricegenad, tixpricesideline, tixpricebox, tixpricepremium;
	int tixsoldgenad, tixsoldsideline, tixsoldbox, tixsoldpremium;
	int totsalegenad, totsalesideline, totsalebox, totsalepremium, totsaleALL;
	

	
	cout << "Please enter the ticket price <space> ticket sales on the required ticket type" << endl;
	cout << " " << endl;
	//GenAd 
	cout << "For General Admission:" << endl;
		cin >> tixpricegenad >> tixsoldgenad;
		totsalegenad = tixpricegenad * tixsoldgenad;
	cout << "Ticket Price: " << tixpricegenad;
	cout << "\nTickets Sold: " << tixsoldgenad << endl;
	cout << "Total GenAd Ticket Sales: " << totsalegenad << endl;
	
	//Sideline
	cout << "For Sideline:" << endl;
		cin >> tixpricesideline >> tixsoldsideline;
		totsalesideline = tixpricesideline * tixsoldsideline;
	cout << "Ticket Price: " << tixpricesideline;
	cout << "\nTickets Sold: " << tixsoldsideline << endl;
	cout << "Total Sideline Ticket Sales: " << totsalesideline << endl;
	
	//Box
	cout << "For Box:" << endl;
		cin >> tixpricebox >> tixsoldbox;
		totsalebox = tixpricebox * tixsoldbox;
	cout << "Ticket Price: " << tixsoldbox;
	cout << "\nTickets Sold: " << tixpricebox << endl;
	cout << "Total Box Ticket Sales: " << totsalebox << endl;
	
	//Premium
	cout << "For Premium:" << endl;
		cin >> tixpricepremium >> tixsoldpremium;
		totsalepremium = tixpricepremium * tixsoldpremium;
	cout << "Ticket Price: " << tixpricepremium;
	cout << "\nTickets Sold: " << tixsoldpremium << endl;
	cout << "Total GenAd Ticket Sales: " << totsalepremium << endl;
	
	//Total
		totsaleALL = totsalegenad + totsalesideline + totsalebox + totsalepremium;
	cout << "Total Sales:" << totsaleALL << endl;
	
	return 0;
}
