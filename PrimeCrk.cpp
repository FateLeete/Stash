#include <iostream>
#include <math.h>

using namespace std;

int main()
	{
        bool ss = false; 
        
	unsigned long long j = 0ULL, dNum = 0ULL, trS = 0ULL ;
        trS = trS - 1;

	for (;;)
		{	 
		ss = false; 
                j = 0ULL;
                dNum = 0ULL;

		do
			{
			cout << "\n\n\n*****************************************************\n* Enter a number between 3 and " << trS << " : ";
			cin >> dNum ;
			}
		while (dNum < 3 || dNum > trS);
		
		cout << "\n\n\n*** ==>  " << dNum << "..   ";		
		
		for (;;)
			{
			cout << "Computing ! ";	
			for (unsigned long long i = 2LL; i < dNum; i++)
				{
				if (dNum % i == 0)
					{
					j = dNum / i ;
				        cout << "\n\n************************\n" << i << " * " << j << "\n************************";
				        ss = true;
				        j = 0;
					}	
	                        if ( (double)i > sqrt((double)dNum) )	
					{
					if (!ss)
					cout << "\n\n****************\n* Prime Number * " << dNum << "\n****************";
					
                                        j = 1;
					break;
					}
				}
				
	                if (j != 0 ) 
				break;
			}
		}
	
	return 0;
	}

