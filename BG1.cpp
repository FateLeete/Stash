#include <iostream>

using namespace std;

int ultra = 0;
int master1 = 5;
int master2 = 7;
int master3 = 11;
int cmp = 7;

const int n = 262144;
const int z = 23006;

const int iti3 = n / 1024;

bool bigCar[n];

bool tabMu[z];
int tabMuC[z];
int tempUltraCp[z];

int nextMu = 7;
int o = 1;
int p = 0;
int cpMu = 5;

void printFoobar();

int main(int argc, char** argv)
{
	for (int j = 0; j < n; j++)
	{
		if (j % 256 == 0)
			cout << " !";

		bigCar[j] = false;
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

	bigCar[0] = true;
	bigCar[1] = true;
	bigCar[2] = true;
	bigCar[3] = true;
	bigCar[4] = false;
	bigCar[5] = true;
	bigCar[6] = false;
	bigCar[7] = true;
	bigCar[8] = false;
	bigCar[9] = false;
	bigCar[10] = false;
	bigCar[11] = true;
	bigCar[12] = false;            

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
			for (int j = 0; j < z; j++)
			{
				if (tabMu[j])
				{
					if (ultra % tabMuC[j] == 0)
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
						cout << " " << cmp << "   \t " << ultra << "\n";
						bigCar[ultra] = true;
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
	cin.ignore();
	cin.get();

	printFoobar();

	cin.ignore();
	cin.get();

	return 0;
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
					}
				}
			}

			if (i != 15)
				cout << endl;
			else
				cout << "  " << (1024 * (l + 1)) - 1;
		}

		cout << endl << endl;
	}
}
