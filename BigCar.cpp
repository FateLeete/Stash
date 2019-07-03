#include <iostream>

using namespace std;


bool prime(int);

void printFoo();

void printBar();

void fullCar();

void ano(int);

void szof(bool);

void convFooBar();

void printFooBar();

void szfb();

const int bigCar = 16384;

char foo[bigCar];
char bar[bigCar];
char foobar[2][bigCar];

int main()
	{
    cout << "Continue ? ";      
    cin.get();
     
    fullCar();
             
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
   
    cout << endl << endl << "Continue to part III ??";
    cin.ignore();
    cin.get();
    
    convFooBar();
    printFooBar();
    
    szfb();
    
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
                    cout << endl;
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
                cout << endl;
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
     
void convFooBar()
     {
     int cmp= 1;
     int cmp2= 1;
     int stpcmp= 1;
     int stpcmp2= 1;
     
     bool isFoo= true;
   
     for(int i= 0; i < bigCar; i++)
             {
             if (isFoo)
                {             
                foobar[0][i] = bar[i];       
                foobar[1][i] = '8';
                 
                if (cmp == 16)
                   {
                   cmp= 0;
                   if (stpcmp == 16)
                       {
                       isFoo= false;       
                       stpcmp= 0;
                       }
                
                   stpcmp++;
                   }
                    
                cmp++;
                }
               else
                   {        
                   foobar[1][i] = bar[i]; 
                   foobar[0][i] = '8';       
                   
                   if (cmp2 == 16)
                      {
                      cmp2= 0;
                      if (stpcmp2 == 16)
                         {
                         isFoo= true;       
                         stpcmp2= 0;
                         }
                
                      stpcmp2++;
                      }
                    
                   cmp2++;
                   }
                              
             } 
     }
     
void printFooBar()
     {     
     int cmp= 1;
     int stpcmp= 1;
     int cmp2= 0; 
     int cmp3= 0;
     int cmp4= 0;
        
     for(int i= 0; i < bigCar; i++)
             {
             for (int k = 0; k < 16; k++)
                 {                                       
                 cout << foobar[0][i+k];
                 cmp2= i+k;
                 }
             cout << ' ';
             cmp2++;
                 
             for(int j= 0; j < 16; j++)
                    {
                    cmp3= cmp2 + j;    
                    cout << foobar[1][cmp3];
                    cmp4= cmp3;     
                    }
                    
             cmp4++;       
             cout << endl;            
                  
             if (stpcmp == 16)
                   {
                   stpcmp= 1;
                   cout << endl;
                   }
             i= cmp4;    
             stpcmp++;   
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

void szfb()
     {
     for(int i= 0; i < 8; i++)
             {
             cout << "\n****************************************";
             } 
            
    cout << endl << endl;   
    cout << "\n****************************************\n";
    
    cout << "Size of foobar : " << sizeof(foobar);
       
    cout << "\n****************************************";
    } 
