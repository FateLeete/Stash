#include <iostream>
#include <math.h>

using namespace std;

int main()
	{
	long long dNum = 9223372036854775000LL;
	
	for (;;)
		{
		cout << "Computing ! ";	
		for (long long i = 2LL; i < dNum; i++)
			{
			if (dNum % i == 0)
				{
				break;
				}	
            if ( (double)i > sqrt((double)dNum) )	
				{
				cout << "\n\n********************\n" << dNum << "\n********************\n\n";
				break;
				}
			}

		dNum++;
		}

	return 0;
	}

