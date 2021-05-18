#include <iostream>
#include <math.h>

using namespace std;

int ultra = 0;
int master1 = 5;
int master2 = 7;
int master3 = 11;
int cmp = 7;

const int n = 262144;                        //1048576; 
int bigCarr = n;
const int z = 23006;                         //  82030; 

const int iti3 = n / 1024;

char bigCar[n];

bool tabMu[z];
int tabMuC[z];
int tempUltraCp[z];

int nextMu = 7;
int o = 1;
int p = 0;
int cpMu = 5;

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
		tabMu[j] = false;
		tabMuC[j] = 0;
		tempUltraCp[j] = 0;
	}

	tabMu[2] = true;
	tabMuC[2] = 3;
	tabMu[4] = true;
	tabMuC[4] = 5;

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

	cout << "\n\n " << "1" << "  \t 1 \n";
	cout << " " << "2" << "  \t 2 \n";
	cout << " " << "3" << "  \t 3 \n";
	cout << " " << "4" << "  \t 5 \n";
	cout << " " << "5" << "  \t 7 \n";
	cout << " " << "6" << "  \t 11 \n";

	for (;;)
	{
		ultra = master2 + master3 - master1;

		if (ultra > n)
			break;

		if (ultra <= (cpMu) * (cpMu))
		{
			for (int j = 0; j < z ; j++)
			{
				if (tabMu[j])
				{
					if (fmod((double)ultra, (double)tabMuC[j]) == 0)      
					{
						master1 = master2;
						master2 = master3;
						master3 = ultra;
						break;
					}
				}
				else
				{ 
					if (j == z - 1)
					{
						if (cmp <= 1000 || cmp == 2000)  
						cout << " " << cmp << "   \t " << ultra << "\n";
						if (cmp % 3000 == 0 && cmp < 22000)
						cout << " " << cmp << "   \t " << ultra << "\n";
						if (cmp >= 22000)
						cout << " " << cmp << "   \t " << ultra << "\n";
						
						bigCar[ultra] = '1';
						cmp++;
						tempUltraCp[o] = ultra;
						++o;
						master1 = master2;
						master2 = master3;
						master3 = ultra;
					}
				}
			}
		}
		else
		{
			cpMu = nextMu;
			tabMu[cpMu - 1] = true;
			tabMuC[cpMu - 1] = cpMu;
			nextMu = tempUltraCp[p];
			++p;
		}
	}

	cout << "\n\n -----------> Continue to part II ? ";
	cin.get();
	cout << "\n\n -----------> Please wait ! ";
	
	printFoo(); 
    
	printFoobar();

	cin.ignore();
	cin.get();

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
	int cmp = 1;
	int stpcmp = 1;
	int barcmp = 0;

	cout << "\n\n";

	for (int i = 0; i < bigCarr; i++)
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

		if (cmp == 16)
		{
			cmp = 0;

			if (stpcmp == 16)
			{
			stpcmp = 0;
			}

			stpcmp++;
		}

		cmp++;
	}
}

void printFoobar()
{
	cout << endl << endl;

	for (int l = 0; l < iti3; l++)
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << " ";

				if (j == 0)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 1)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 2)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 3)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bigCar[k + (256 * j) + (i * 16) + (1024 * l)];
						if (k == 15) 
							cout << "  " << (1024 * l) + (j * 256) + (i * 16) + k;
					}
				}
			}

			if (i != 15)
				cout << endl;

		}

		cout << endl << endl;
	}
}
