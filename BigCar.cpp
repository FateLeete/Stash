
#include <iostream>

using namespace std;


bool prime(int);

void printFoo();

void printBar();

void fillCar();

void ano(int);

void szof(bool);

void convBar2();

void printBar2();

void printFoobar();


const int bigCar = 262144;           //  1024 * n 

const int iti = bigCar / 256;

const int iti3 = bigCar / 1024;

char foo[bigCar];
char bar[bigCar];
char bar2[2][bigCar];
char foobar[bigCar];

int main()
{
	cout << "Continue ? ";

	cin.get();

	cout << endl << "Please wait, computing !";

	fillCar();

	printFoo();

	bool isfoo = true;

	szof(isfoo);

	cin.ignore();

	cout << endl << endl << "Continue to part II ?";

	cin.get();

	printBar();

	isfoo = false;

	szof(isfoo);

	cin.ignore();

	cout << endl << endl << "Continue to part III ?";

	cin.get();

	convBar2();

	printBar2();

	cin.ignore();

	cout << endl << endl << "Continue to part IV ?";

	cin.get();

	printFoobar();

	cin.ignore();

	cin.get();

	return 0;
}

bool prime(int c)
{
	for (int i = 2; i < c; i++)
	{
		if (c % i == 0)
		{
			return false;
		}
		if (i > (c / 2) - 1)
		{
			return true;
		}
	}
}

void printFoo()
{
	int cmp = 1;
	int stpcmp = 1;
	int barcmp = 0;

	cout << "\n\n";

	for (int i = 1; i <= bigCar; i++)
	{
		cout << foo[i - 1];
		bar[i - 1] = foo[i - 1];

		if (foo[i - 1] == '0')
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
			cout << "   " << i - 1 << endl;
			cmp = 0;

			if (stpcmp == 16)
			{
				cout << endl;
				stpcmp = 0;
			}

			stpcmp++;
		}

		cmp++;
	}
}

void fillCar()
{
	foo[0] = '1';
	foo[1] = '1';
	foo[2] = '1';
	foo[3] = '1';

	for (int i = 4; i < bigCar; i++)
	{
		if (i % 2048 == 0)
		{
			cout << '!';
		}

		bool b = prime(i);

		if (b)
		{
			foo[i] = '1';
		}
		else if (1)
		{
			foo[i] = '0';
		}
	}
}

void ano(int i)
{
	for (int j = 0; j < 17; j++)
	{
		bar[i - j] = '>';
	}
}

void printBar()
{
	int cmp = 1;
	int stpcmp = 1;

	cout << "\n\n";

	for (int i = 0; i < bigCar; i++)
	{
		cout << bar[i];

		if (cmp == 16)
		{
			cout << "   " << i << endl;
			cmp = 0;

			if (stpcmp == 16)
			{
				cout << endl;
				stpcmp = 0;
			}

			stpcmp++;
		}

		cmp++;
	}
}

void convBar2()
{
	int z = 1;

	for (int i = 0; i < iti / 2; i++)
	{
		for (int j = 0; j < 256; j++)
		{
			bar2[0][j + (i * 512)] = bar[j + (i * 512)];
			bar2[1][j + (i * 512)] = '7';
		}

		for (int k = 0; k < 256; k++)
		{
			bar2[1][k + (z * 256)] = bar[k + (z * 256)];
			bar2[0][k + (z * 256)] = '8';
		}

		z = z + 2;
	}
}


void printBar2()
{
	int cmt = 0;
	int cmt2 = 0;
	int m = 1;
	int n = 0;

	cout << "\n\n";

	for (int i = 0; i < iti / 2; i++)
	{
		cmt = 0;
		cmt2 = 0;

		for (int j = 0; j < 16; j++)
		{
			for (int k = 0; k < 16; k++)
			{
				if (k == 0)
				{
					cout << " ";
				}
				if (k != 15)
				{
					cout << bar2[0][cmt + (256 * (i + n))];
					cmt++;
				}
				else
				{
					cout << bar2[0][cmt + (256 * (i + n))];
					cmt++;
				}
			}

			for (int l = 0; l < 16; l++)
			{
				if (l == 0)
				{
					cout << " ";
				}
				if (l != 15)
				{
					cout << bar2[1][cmt2 + (256 * m)];
					cmt2++;
				}
				else
				{
					cout << bar2[1][cmt2 + (256 * m)];
					cmt2++;
				}
			}

			if (j == 15)
			{
				cout << "   " << ((i + 1) * 512) - 1;
			}

			cout << endl;
		}

		cout << endl;
		++n;
		m = m + 2;
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
		        cout << ((1024 * l) + (i * 16) + (256 * j)) << "\t";

				if (j == 0)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 1)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 2)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bar[k + (256 * j) + (i * 16) + (1024 * l)];
					}
				}
				if (j == 3)
				{
					for (int k = 0; k < 16; k++)
					{
						cout << bar[k + (256 * j) + (i * 16) + (1024 * l)];
                    }
				}
			
               cout << " " << ((1024 * l) + (i * 16) + (256 * j) + 15) << "\t";		
			}

			if (i != 15)
				cout << endl;

		}

		cout << endl << endl;
	}
	
    cout << "\n\n\n\n\t\t\t\tSize of Foobar : " << sizeof(bar);
	
}

void szof(bool isFoo)
{
	for (int i = 0; i < 8; i++)
	{
		cout << "\n****************************************";
	}

	cout << endl << endl;
	cout << "\n****************************************\n";

	if (isFoo)
	{
		cout << "Size of foo : " << sizeof(foo);
	}

	else if (1)
	{
		cout << "Size of bar : " << sizeof(bar);
	}

	cout << "\n****************************************";
}
