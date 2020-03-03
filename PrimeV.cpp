#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
	{
	unsigned long long dNum0 = 6ULL;
	
	
	cout << "Creating tab : ";
	
	int* tabMu =  (int*) malloc (2000000000);	
	if (tabMu == NULL) exit (1);	
	
	cout << "\nDone!";
	cin.get();
	
	cout << "\n\nFilling  tab : ";
	
	tabMu[0] = 2;	
	tabMu[1] = 3;
	tabMu[2] = 5;
		
	cout << "\nDone!";

	cout << "\n\nCalculating Prime table, Please wait !";
	
	unsigned long c = 4UL;
	unsigned long cc = 3UL;
	int pp = 100;
	unsigned long jjj = 10000UL;
	
	cout << "\n -*-*- " << "1" << " --> " << "    : 2";
	cout << "\n -*-*- " << "2" << " --> " << "    : 3";
	cout << "\n -*-*- " << "3" << " --> " << "    : 5"; 
	
	for (;;)
		{
		for (unsigned long i = 2UL; i < 1000000; i++)
			{
			if (dNum0 % i == 0)
				{
				break;
				}	
            if ( (double)i > sqrt((double)dNum0) )	
				{	
				if(c <= 100)
					{
					cout << "\n -*-*- " << c << " --> " << "    : " << dNum0;
					}
			
				tabMu[cc] = dNum0;
			
				
				if ( c == jjj)	
					{
					cout << "\n -*" << pp-- << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 10000;				
					}
					
				++c;
				++cc;
				break;		
				}
			}
		
		dNum0++;	
		
		if (cc > 1000000)
			break;
		}
	
		cout << "\n\nAll Done !!";
		cout << "\n\nREADY !!!!!\n\nPress ENTER!\n\n";
		cin.get();
		
		for (;;)
		{
		for (unsigned long i = 0UL; i < dNum0; i++)
			{
			if (dNum0 % tabMu[i] == 0)
				{
				break;
				}	
				
            if ( (double)i > sqrt((double)dNum0) )	
				{
				tabMu[cc] = dNum0;
								
				if ( c == jjj)	
					{
					cout << "\n -*" << pp-- << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 10000;				
					}
				
				++c;
				++cc;
				break;
				}
			}
			
		dNum0++;
		}

	return 0;
	}
