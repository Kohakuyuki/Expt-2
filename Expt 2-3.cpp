#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double V,z;
	double x, y;
	char inputx;
	
	cout << "Enter the letter of the integer of x: \n";
	cout << "A. 1\n";
	cout << "B. 2\n";
	cout << "C. Other Values\n";
	cin >> inputx;
	
	switch (inputx)
	{
		case 'a':
		case 'A':
			cout << "What is the integer of y? \n"; 
			cin >> y;
			
			if ((5 > y) > 1)
			{
				x = 1;
				z = 2.5;
				V = x*y*z;
				cout << "V = " << setprecision(2)  << fixed << V << endl;
				std::cout << std::setw(10);
				break;
			}
			
			else if (5 <= y)
			{
				x = 1;
				z = 2.5;
				V =	x+(y/z);
				cout << "V = " << setprecision(2)  << fixed << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
		case 'b':
		case 'B':
			cout << "What is the integer of y? \n"; 
			cin >> y;
			
			if (y <=5)
			{
				x = 2;
				z = 2.5;
				V = fabs (x - y)/z;
				cout << "V = " << setprecision(2)  << fixed << V << endl;
				std::cout << std::setw(10);
				break;
			}
			
			else if (y > 5)
			{
				x = 2;
				z = 2.5;
				V = x - sqrt(y + z);
				cout << "V = " << setprecision(2)  << fixed << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
		case 'c':
		case 'C':
			{
				z = 2.5;
				cout << "What is the integer of x? \n"; 
				cin >> x;
				cout << "What is the integer of y? \n"; 
				cin >> y;
				V = x + y + z;
				cout << "V = " << setprecision(2)  << fixed << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
	}
	
	return 0;
}
