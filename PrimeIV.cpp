#include <iostream>
#include <math.h>

using namespace std;

int main()
	{
	unsigned __int64 dNum = 18446744073709551000ULL;
	unsigned __int64 dNum2 = 0ULL;
	
	for (;;)
		{
		cout << "Computing ! ";	
		for (unsigned __int64 i = 2ULL; i < dNum; i++)
			{
			dNum2 = dNum % 10;
			
			if (dNum2 == 0 || dNum2 == 2 || dNum2 == 4 || dNum2 == 5 || dNum2 == 6 || dNum2 == 8)
				break;
								
			if (dNum % i == 0)
				break;
					
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
