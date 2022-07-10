#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

const int nbValue = 100000;

int tbRand[nbValue];
int tbRandRes[100];
int tbMoy[100];
bool firstLast = true;
bool firstPrint = true;
int lessOcc = 1000;
int plusOcc = 1000;
int lessMoy = 1000;
int plusMoy = 1000;


int main()
{
    
for(;;)
{   
    srand (time(NULL));
    
    for (int i = 0; i < nbValue ; i++)
    {
        tbRand[i] = rand() % 100;
    }

    int tempo = 0;

    for (int i = 0 ; i < 100; i++)
    {
        tbRandRes[i] = 0;
    }
    
    for (int i = 0 ; i < nbValue ; i++)
    {
        tempo = tbRand[i];
        tbRandRes[tempo] = tbRandRes[tempo] + 1;
    }
    
    lessOcc = 1000;
    plusOcc = 1000; 
    
    lessMoy = 1000;
    plusMoy = 1000;
    
    if (firstLast)
    {              
          for (int i = 0 ; i < 100 ; i++)
          {   
              tbMoy[i] = tbRandRes[i];        
              
              if (tbRandRes[i] < lessOcc)
                 {
                    lessOcc = tbRandRes[i];
                 }
              if (tbRandRes[i] > plusOcc)
                 {
                    plusOcc = tbRandRes[i];
                 }
          }
    }
    else
    {
        for (int i = 0 ; i < 100 ; i++)
        {   
            tbMoy[i] = ((tbRandRes[i] + tbMoy[i]) / 2);
               
            if (tbRandRes[i] < lessOcc)
            {
                lessOcc = tbRandRes[i];
            }
            if (tbRandRes[i] > plusOcc)
            {
                plusOcc = tbRandRes[i];
            }
            if (tbMoy[i] < lessMoy)
            {
                lessMoy = tbMoy[i];
            }
            if (tbMoy[i] > plusMoy)
            {
                plusMoy = tbMoy[i];
            }
        }    
    }
        
    for (int i = 0 ; i < 100 ; i++)
    {
        if (!firstPrint)
        {
            if ((i + 2) % 2 == 0 )
            {
                 cout << endl;
            }
                           
            cout << "#" << i << "\t" << tbRandRes[i] << "\tMoy:\t" << tbMoy[i] << "\t";
           
            if (i == 61)
            {
                 cout << "-Occ : " << lessOcc;
            }
            if (i == 63)
            {
                 cout <<"+Occ : " << plusOcc;
            }
            if (i == 65)
            {
                 cout << "-Moy : " << lessMoy;
            }
            if (i == 67)
            {
                 cout <<"+Moy : " << plusMoy;
            }   
        }
        else
        {
            if ((i + 2) % 2 == 0 )
            {
                 cout << endl;
            }
               
            cout << "#" << i << "\t" << tbRandRes[i] << "\tMoy:\t nd \t";   
            
            if (i == 61)
            {
                 cout << "-Occ : " << lessOcc;
            }
            if (i == 63)
            {
                 cout <<"+Occ : " << plusOcc;
            }        
        }
    }
   
    firstLast = false;
    firstPrint = false;   
    
    cin.get();    
}

return 0;
}
