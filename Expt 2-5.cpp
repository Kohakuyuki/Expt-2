#include <iostream>
using namespace std;

int main()
{
	int count, NextNum, Num0 = 0, Num1 = 1, n = 22;
	
	for (count = 0; count < n; count++)
	{
		if (count <= 1)
			NextNum=count;
			
		else
		{
			NextNum = Num0 + Num1;
			Num0 = Num1;
			Num1 = NextNum;
		}
		cout << NextNum << ", ";
	}
	
	return 0;
}
