#include <iostream>

using namespace std;

int primefactors(long);

int main()
{

	long n;
	cin >> n;
	long i = 2;
	while (n)
	{
		if (primefactors(i) == 1)
		{
			// cout << i << endl;
			n--;
		}
		i++;
	}
	cout << i - 1;
	return 0;
}

int primefactors(long n)
{
	long i = 2, count = 0;
	while (n != 1)
	{
		if (n % i == 0)
		{
			count++;
			if (count >= 2)
			{
				return 1;
			}
			n = n / i;
		}
		else
		{
			if (count >= 2)
			{
				return 1;
			}
			count = 0;
			i++;
		}
	}

	if (count >= 2)
	{
		return 1;
	}
	return 0;
}
