#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
	{
	unsigned long long dNum0 = 6ULL;
	unsigned long long dN;
	
	cout << "Creating tab : ";
	
	unsigned long long* tabMu =  (unsigned long long*) malloc (16000000000ULL);	

	if (tabMu == NULL) exit (1);	
	
	cout << "\nDone!";
	//cin.get();
	
	cout << "\n\nFilling  tab : ";
	
	tabMu[0] = 2;	
	tabMu[1] = 3;
	tabMu[2] = 5;
		
	//cout << "\nDone!";

	cout << "\n\nCalculating Prime table, Please wait !";
	
	unsigned long long c = 4ULL;
	unsigned long long cc = 3ULL;
	unsigned long long pp = 100ULL;
	unsigned long long jjj = 10000ULL;
	
	cout << "\n -*-*- " << "1" << " --> " << "    : 2";
	cout << "\n -*-*- " << "2" << " --> " << "    : 3";
	cout << "\n -*-*- " << "3" << " --> " << "    : 5"; 
	
	for (;;)
		{
		for (unsigned long i = 2UL; i < 1000000; i++)
			{
			dN = dNum0 % 10;	
			if (dN == 0 || dN == 2 || dN == 4 || dN == 5 || dN == 6 || dN == 8)
				break;


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
	//	cin.get();
		
		bool alert = false;
		
		for (;;)
		{
		for (unsigned long long i = 0ULL; i < dNum0; i++)
			{
			dN = dNum0 % 10;	
			if (dN == 0 || dN == 2 || dN == 4 || dN == 5 || dN == 6 || dN == 8)
				break;
	
				
			if (dNum0 % tabMu[i] == 0)
				{
				break;
				}	
				
            if ( (double)i > sqrt((double)dNum0) )	
				{
				tabMu[cc] = dNum0;
								
				if ( c == jjj)	
					{
					cout << "\n -*" << pp++ << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 10000;				
					}
				
				++c;
				++cc;
				
				if (cc > 15999999900 || dNum0 > 18000000000000000000 )
					alert = true;
				
				break;
				}
			}
		
		if (alert)
			break;
			
		dNum0++;
		}

	
	cout << "\n\n\n\n********************************************************\n* That is all ;) \n****************************";
	cin.get();
	cin.get();
	return 0;
	}
