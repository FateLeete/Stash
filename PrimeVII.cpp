#include <iostream>                 // untested a lot..
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
	{
	clock_t start, end, start2, end2, start3, end3;
	double cpu_time, cpu_time2, cpu_time3;	
		
	unsigned long long dNum0 = 6ULL;
	unsigned long long dN = 0ULL;
	
	cout << "Creating tab : ";
	
	unsigned long long* tabMu =  (unsigned long long*) malloc (1600000000ULL);	

	if (tabMu == NULL) exit (1);	
	
	cout << "\nDone!";
	//cin.get();
	
	cout << "\n\nFilling  tab : ";
	
	tabMu[0] = 2;	
	tabMu[1] = 3;
	tabMu[2] = 5;
		
	cout << "\nDone!";

	cout << "\n\nCalculating Prime table, Please wait !\n";
	
	unsigned long long c = 4ULL;
	unsigned long long cc = 3ULL;
	unsigned long long pp = 10ULL;
	unsigned long long jjj = 100000ULL;
	
	start = clock();
	
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
				tabMu[cc] = dNum0;
			
				if ( c == jjj)	
					{
					cout << "\n -*" << pp-- << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 100000;				
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
	end = clock();
	cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;
		cout << "\n\nAll Done !! " << cpu_time ;
		cout << "\n\nREADY !!!!!\n\nCOMPUTING! !\n\n";
	//	cin.get();
		
		bool alert = false;
		
		start2 = clock();
		
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
					jjj += 100000;				
					}
				
				++c;
				++cc;
				
				if (cc > 2000000 || dNum0 > 18000000000000000000 )
					alert = true;
				
				break;
				}
			}
		
		if (alert)
			break;
			
		dNum0++;
		}
   end2 = clock();
cpu_time2 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
	cout << "\n\n\n\n" << cpu_time2 << "*****\n";
        cout << "\nNOW GONNA COMPUTE FOR REALLY LONG TIME [till 1599999999th Prime Number] , PROBABLY GONNA CRASH.. :) \n\n" ;
	
	   alert = false;
		
		start3 = clock();
		
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
					jjj += 100000;				
					}
				
				++c;
				++cc;
				
				if (cc >= 1599999999 || dNum0 > 18000000000000000000 )
					alert = true;
				
				break;
				}
			}
		
		if (alert)
			break;
			
		dNum0++;
		}
   end3 = clock();
cpu_time3 = ((double) (end3 - start3)) / CLOCKS_PER_SEC;
	cout << "\n\n\n\n" << cpu_time3 << "********************************************************\n** That is all ;) \n****************************";
	cin.get();
	cin.get();
	return 0;
	}
