#include <iostream>

using namespace std;

int main()
	{
	long long dNum = 4LL;
	long long dCmp = 4LL;

	cout << ' ' << '1' << ' ' << '1' << endl;
	cout << ' ' << '2' << ' ' << '2' << endl;
	cout << ' ' << '3' << ' ' << '3' << endl;
	
	for (;;)
		{
		for (long long i = 2LL; i < dNum; i++)
			{
                        if (dNum == 38)
				{
				cin.get();
				break;
				}
			if (dNum % i == 0)
				{
				break;
				}
			if (i > (dNum / 2) - 1 )
				{
				cout << ' ' << dCmp << ' ' << dNum << endl;
				dCmp++;
				break;
				}
			}

		dNum++;
		}

	return 0;
	}

