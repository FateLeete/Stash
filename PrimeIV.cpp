#include <iostream>
#include <math.h>

using namespace std;

int main()
	{
	unsigned __int64 dNum = 18446744073709551000ULL;
	
	for (;;)
		{
		cout << "Computing ! ";	
		for (unsigned __int64 i = 2ULL; i < dNum; i++)
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

