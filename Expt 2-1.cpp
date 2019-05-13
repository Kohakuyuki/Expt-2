#include <iostream>
using namespace std;

int main()
{
	//Variables
	int hours, TotalFee;
	char pack;
	
	//Const
	const int PackageA = 995;
	const int PackageB = 1495;
	const int PackageC = 1995;
	
	cout << "Please write the letter of the desired package:\n";
	cout << "A. For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout << "B. For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
	cout << "C. For P1995/mo of unlimited access is provided.\n";
	cin >> pack;
	
	switch(pack)
	{
		case 'a':
		case 'A':
			
			cout << "Input the number of additional hours used:"; 
			cin >> hours; 
			
			cout << "Total Customer Monthly Bill:";
			TotalFee = PackageA + (hours*20);
			cout << TotalFee << "Php";
			break;
		
		case 'b':
		case 'B':
			cout << "Input the number of additional hours used:"; 
			cin >> hours; 
			
			cout << "Total Customer Monthly Bill:";
			TotalFee = PackageB + (hours*10);
			cout << TotalFee << "Php";
			break;
		
		case 'c':
		case 'C':
			cout << "Total Customer Monthly Bill:";
			cout << "1995Php";
			break;
			
		default:
			cout << "Input is invalid.";
	}
	
	return 0;
}
