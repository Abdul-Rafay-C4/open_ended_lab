#include <iostream>

using namespace std;

int main()
{
	int i, ch,lch;
	do
	{
		cout << "\nIf you want to check prime number in serier then enter 0 \nIf you want to check a specific number then enter 1:";
		cin >> ch;
		bool is_prime = true;
		if (ch == 0)
		{
			int r1, r2;
			cout << "\nEnter a range between you want to check a prime number(use space between range):";
			cin >> r1 >> r2;
			cout << "\nPrime Numbers are:";
			int cou;
			for (; r1 <= r2; r1++)
			{
				cou = 0;
				for (i = 2; i <= r1 / 2; i++)
				{

					if (r1 % i == 0)
					{
						cou++;
					}
				}
				if (cou == 0)
					cout << r1 << " ";
			}
		}
		else if (ch == 1)
		{
			int i, n;
			cout << "\nEnter a positive integer: ";
			cin >> n;
			for (i = 2; i <= n / 2; i++)
			{
				if (n % i == 0)
				{
					is_prime = false;
					break;
				}
			}
			if (is_prime)
				cout << n << " is a prime number";
			else
				cout << n << " is not a prime number";
			
		}
		cout << "\n\nEnter 0 if want to retry:";
		cin >> lch;
	} while (lch == 0);
	
	return 0;
}