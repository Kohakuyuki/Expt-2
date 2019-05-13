#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int const Demand = 35;
	double const Use = 1.10;
	int const latefee = 20;
	
	double waterbill, unpaidbill, totalbill;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Enter the customer's water consumption (per gallon):\n"; cin >> waterbill;
	cout << "Enter the customer's unpaid balance:\n"; cin >> unpaidbill;
	
		if (unpaidbill > 0)
		{
		totalbill = (waterbill*Use) + Demand + unpaidbill + latefee;
		cout << "Total water bill:" << totalbill << "Php" << endl;
		}
		
		else
		{
			totalbill = (waterbill*Use) + Demand;
		cout << "Total water bill:" << totalbill << "Php" << endl;
		}
	
	
	return 0;
}
