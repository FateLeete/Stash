#include <iostream>                 
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
	{
	clock_t start, end, start2, end2, start3, end3;
	double cpu_time, cpu_time2, cpu_time3;	
		
	unsigned long long dNum0 = 7ULL;
	
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
		for (unsigned long long i = 2ULL; i < 16000000; i++)
			{
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
		
		dNum0 = dNum0 + 2;
		
		if (cc == 1000000)
			break;
		}
	end = clock();
	cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;
		cout << "\n\nAll Done !! " << cpu_time << "*****";;
		cout << "\n\nREADY !!!!!\n\nCOMPUTING !!\n\n";
	//	cin.get();
		
		bool alert = false;
		
		start2 = clock();
		
		for (;;)
		{
		for (unsigned long long i = 0ULL; i < 33000000; i++)
			{	
			if (dNum0 % tabMu[i] == 0)
				{
				break;
				}	
				
            if ( (double)tabMu[i] > sqrt((double)dNum0) )	
				{
				tabMu[cc] = dNum0;
								
				if ( c == jjj)	
					{
					cout << "\n -*" << pp++ << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 100000;				
					}
				
				++c;
				++cc;
				
				if (cc == 2000000)
					alert = true;
				
				break;
				}
			}
		
		dNum0 = dNum0 + 2;
		
		if (alert)
			break;			
		}
   end2 = clock();
cpu_time2 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
	cout << "\n\n\n\nAll Done !! " << cpu_time2 << "*****\n";
        cout << "\nNOW COMPUTING FOR REALLY LONG TIME\n[till 1,600,000,000th Prime Number]\nPROBABLY GONNA CRASH.. :) \n\n" ;
	
	   alert = false;
		
		start3 = clock();
		
		for (;;)
		{
		for (unsigned long long i = 0ULL; i < 1600000000; i++)
			{
			if (dNum0 % tabMu[i] == 0)
				{
				break;
				}	
				
            if ( (double)tabMu[i] > sqrt((double)dNum0) )	
				{
				tabMu[cc] = dNum0;
								
				if ( c == jjj)	
					{
					cout << "\n -*" << pp++ << "*- " << c << " --> " << "    : " << dNum0;
					jjj += 100000;				
					}
				
				++c;
				++cc;
				
				if (cc == 1600000000 || dNum0 > 18000000000000000000 )
					alert = true;
				
				break;
				}
			}
		
		if (alert)
			break;
			
		dNum0 = dNum0 + 2;
		}
   end3 = clock();
cpu_time3 = ((double) (end3 - start3)) / CLOCKS_PER_SEC;
	cout << "\n\n\n\nWow !! " << cpu_time3 << "**************\n\n** That is all ;) \n****************************";
	cin.get();
	cin.get();
	return 0;
	}