#include <iostream>
using namespace std;

int main()
{
	int counter;
	
	cout << "Counting....\n";
	counter = 1;
	
	for (counter=1;counter<=10;counter++)
	{
		cout << counter << ", ";
		if (counter==10) break;
	}
	for (counter=12;counter<=30;counter+=2)
	{
		cout << counter << ", ";
	}
	return 0;
}
