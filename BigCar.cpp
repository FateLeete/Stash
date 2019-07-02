#include <iostream>

using namespace std;


bool prime(int);

void printFoo();

void fullCar();

const int bigCar = 262144;

char foo[bigCar];

int main()
	{
    cout << "Continue ? ";      
    cin.get();
     
    fullCar();
             
    printFoo();
       
    for(int i= 0; i < 8; i++)
            {
            cout << "\n********************************************************************************";
            }
            
    cout << endl << endl;
    cout << "\n****************************************\n";
  
    cout << "Size of foo : " << sizeof(foo);
  
    cout << "\n****************************************";
    
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
         if (i > (c / 2) + 1 )
			{
			return true;
			}
         }
     }        

void printFoo()
     {
     for(int i= 0; i < bigCar; i++)
             {
             cout << foo[i];
             }        
     }          
     
void fullCar()
     {
     
    foo[0]= '1';
    foo[1]= '1';
    foo[2]= '1';
    foo[3]= '1';
    
                                                            
    for(int i= 4; i < bigCar; i++)
            {
            bool b = prime(i);      
                       
            if (b)     
               {
               foo[i] = '1';
               }
             else if(1)
               {
               foo[i] = '0';
               }
             }             
      }
