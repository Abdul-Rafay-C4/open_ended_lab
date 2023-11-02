#include <iostream>

using namespace std;

int main()
{
	int i, ch,lch,cou=0; //ch is for check what user want to do and chl is for loop
	do
	{
		cout << "\nIf you want to check prime number in serier then enter 0 \nIf you want to check a specific number then enter 1:";
		cin >> ch;
		if (ch == 0)
		{
			int r1, r2; // range
			cout << "\nEnter a range between you want to check a prime number(use space between range):";
			cin >> r1 >> r2;
			cout << "\nPrime Numbers are:";
			for (; r1 <= r2; r1++) // checking prime between a range
			{
				cou = 0; 
				for (i = 1; i <= r1; i++) 
				{

					if (r1 % i == 0) //if number is divisible by any number then this will run
					{
						cou++; // 
					}
				}
				if (cou == 2) // cou will be 2 because one number and 1 is divisible with the number
					cout << r1 << " ";
			}
		}
		else if (ch == 1) // if user chose to check the single number
		{
			int i, n; 
			cout << "\nEnter an integer: ";
			cin >> n;
			for (i = 2; i <= n / 2; i++) // using same logic as done in upper loop
			{
				if (n % i == 0)
				{
					cou++;
				}
			}
			if (cou==2)
				cout << n << " is a prime number";
			else
				cout << n << " is not a prime number";
			
		}
		cout << "\n\nEnter 1 if want to retry:";
		cout << "\nEnter 0 to exit:";
		cin >> lch; // promt user for runing it again or not
	} while (lch == 1);
	
	return 0;
}