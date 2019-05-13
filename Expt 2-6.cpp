#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int inputnum,sum;
    char choice1, choice2, A, B;
    
    do
	{
	
    cout << "Enter the letter of the first integer: \n";
    cout << "A. 1\n";
    cout << "B. 0\n";
    cin >> choice1;
	
	switch(choice1)
	{
	
    case 'A':
    case 'a':
    {
	
		do
		{
		cout << "Enter a positive integer: ";
    	cin >> inputnum;
    	
		for (int i = 1; i <= inputnum; ++i) 
	    {
        sum += i;
       	}
        cout << "Sum = " << sum << endl;
        cin.clear();
    	cout << "Repeat Process? [Y/N] ";
    	cin >> choice2;
    	}while(choice2!='N'); 
    	break;
	}
	
	case 'B':
    case 'b':
    {
    cout << "Thank You!";
    break;
	}
	}
	}while(choice1==B);
	
    return 0;
}
