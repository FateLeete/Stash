#include <iostream>

using namespace std;


bool prime(int);

const int bigCar = 16384;

int main()
	{
    cout << "Continue ? ";      
    cin.get();
    
    char foo[bigCar];
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
    
     for(int i= 0; i < bigCar; i++)
             {
             cout << foo[i];
             }             
     for(int i= 0; i < 8; i++)
             {
             cout << "\n********************************************************************************";
             }
             
    int ddd = sizeof(foo);
  
    cout << endl << endl;
    cout << "\n****************************************\n";
  
    cout << "Size of foo : " << ddd;
  
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
