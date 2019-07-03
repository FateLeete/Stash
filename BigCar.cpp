#include <iostream>

using namespace std;


bool prime(int);

void printFoo();

void printBar();

void fillCar();

void ano(int);

void szof(bool);

void convFooBar();

void printFooBar();

void szfb();

const int bigCar = 262144;

char foo[bigCar];
char bar[bigCar];

int main()
	{
    cout << "Continue ? ";      
    cin.get();
     
    fillCar();
             
    printFoo();
    
    bool isfoo= true;
    
    szof(isfoo);
           
    cin.ignore();
    
    cout << endl << endl << "Continue to part II ?";
    
    cin.ignore();
    cin.get();
        
    printBar();
    
    isfoo= false;
    
    szof(isfoo);
   
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
     int cmp= 1;
     int stpcmp= 1;
     int barcmp= 0;
     bool flLine= false;
     
     for(int i= 0; i < bigCar; i++)
             {
             cout << foo[i];
             bar[i] = foo[i];
             
             if (foo[i] == '0')
                {                        
                if (barcmp == 16 && i%16 == 0)
                    {
                    ano(i-1);  
                    barcmp= 0;
                    }
                 else
                    {
                    barcmp++;
                    }           
                }
             else
                {
                barcmp= 0;
                }              
             
             if (cmp == 16)
                    {
                    cout << "   " << i << endl;
                    cmp= 0;
                    if (stpcmp == 16)
                       {
                       cout << endl;
                       stpcmp= 0;
                       }
                
                    stpcmp++;
                    }
                    
             cmp++;
             }        
     }
                 
void fillCar()
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

void ano(int i)
     {
     for (int j = 0; j <= 15; j++)
         {       
         bar[i-j]= '>';
         }
     }    
          
void printBar()
     {
     int cmp= 1;
     int stpcmp= 1;
         
     for(int i= 0; i < bigCar; i++)
            {
             cout << bar[i];
                      
             if (cmp == 16)
                {
                cout << "   " << i << endl;
                cmp= 0;
                if (stpcmp == 16)
                   {
                   cout << endl;
                   stpcmp= 0;
                   }
                
                stpcmp++;
                }
                    
            cmp++;
            }        
     }
      
void szof(bool isFoo)
     {
     for(int i= 0; i < 8; i++)
             {
             cout << "\n****************************************";
             } 
            
     cout << endl << endl;   
     cout << "\n****************************************\n";
    
     if (isFoo)
       {
       cout << "Size of foo : " << sizeof(foo);
       }
       
     else if(1)
       {
       cout << "Size of bar : " << sizeof(bar);
       }      
       
     cout << "\n****************************************";
     }                               
