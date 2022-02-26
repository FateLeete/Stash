#include <iostream>
#include <math.h>

using namespace std;

int ultra = 0;
int master1 = 5;
int master2 = 7;
int master3 = 11;
int ucmp = 13;
int mcc = 1;

const int n = 4194304 ; // 262144; 1048576 ;                 
const int z =  295950 ;  //  23006;   83500 ;            

char bigCar[n];

int tabMuC[z];
int tempUltraCp[z];

int nextMu = 7;
int o = 1;
int p = 0;
int cpMu = 5;
int gg = 2;

void ano(int);
void printFoo();
void printFoobar();

int main(int argc, char** argv)
{
	for (int j = 0; j < n; j++)
	{
		bigCar[j] = '0';
	}

	for (int j = 0; j < z; j++)
	{
		tabMuC[j] = 0;
		tempUltraCp[j] = 0;
	}

	tabMuC[0] = 3;
	tabMuC[1] = 5;

	tempUltraCp[0] = 11;

	bigCar[0] = '1';
	bigCar[1] = '1';
	bigCar[2] = '1';
	bigCar[3] = '1';
	bigCar[4] = '0';
	bigCar[5] = '1';
	bigCar[6] = '0';
	bigCar[7] = '1';
	bigCar[8] = '0';
	bigCar[9] = '0';
	bigCar[10] = '0';
	bigCar[11] = '1';
	bigCar[12] = '0';

	for (;;)
	{
		ultra = master2 + master3 - master1;
		ucmp = ultra;
		
		if (ucmp  >= mcc * 1024)
			{
			ucmp = ucmp / 1024 * 1024;
				
                        printFoo(); 
    	                printFoobar();												
				
		        ++mcc;
			}

		if (ultra > n)
			{
			break;
			}
		
		if (ultra <= (cpMu) * (cpMu))
		{
			for (int w = 0; w < gg ; w++)
			{
			    	if (fmod((double)ultra, (double)tabMuC[w]) == 0)      
					{
						master1 = master2;
						master2 = master3;
						master3 = ultra;
						break;
					}
			   	else
			   	{ 
				           	if (tabMuC[w+1] == 0)
				           	{
				             	  	bigCar[ultra] = '1';
					               	tempUltraCp[o] = ultra;
			               			++o;
				               		master1 = master2;
		               				master2 = master3;
				               		master3 = ultra;
                                       break;
			            		}
	     			}
			  }
		}
		else
		{			
			cpMu = nextMu;
			tabMuC[gg] = cpMu;
			nextMu = tempUltraCp[p];
	        ++gg;
			++p;
		}
	}

	return 0;
}

void ano(int i)
{
	for (int j = 1; j <= 16; j++)
	{
		bigCar[i - j] = '>';
	}
}

void printFoo()
{
	int cmpp = 1;
	int stpcmp = 1;
	int barcmp = 0;

	cout << "\n\n";

	for (int i = ucmp - 1024 ; i <= ucmp; i++)
	{	
		if (bigCar[i] == '0')
		{
			if (i % 16 == 0)
			{
				if (barcmp == 15)
				{
					ano(i);
					barcmp = 0;
				}
				else
				{
					barcmp = 0;
				}
			}
			else
			{
				++barcmp;
			}
		}
		else
		{
			barcmp = 0;
		}

		if (cmpp == 16)
		{
			cmpp = 0;

			if (stpcmp == 16)
			{
			stpcmp = 0;
			}

			stpcmp++;
		}

		cmpp++;
	}
}

void printFoobar()
{
        cout << endl ;

	for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << " ";

				if (j == 0)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (ucmp - 1024)];
					}
				}
				if (j == 1)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (ucmp - 1024)];
					}
				}
				if (j == 2)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (ucmp - 1024)];
					}
				}
				if (j == 3)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (ucmp - 1024)];
						if (k == 15) 
							cout << "  " << (ucmp - 1024) + (j * 256) + (i * 16) + k;
					}
				}
			}

		if (i != 15)
			cout << endl;

		}

	cout << endl << endl;
}
