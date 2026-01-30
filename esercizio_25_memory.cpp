#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(int argc, char** argv) {
	srand(time(NULL));
	 /*int l;          // valore ASCII
   
    int n;          // lunghezza stringa
    int val;        // valore convertito 
    string x;

    

    n = x.length();

    for(int i = 0; i < n; i++)
    {
        l = (int)x[i];
        
        val=rand()%26+65;
   }
   cout<<val;*/
   
   int cartella[10][5];
   
   for(int i=0; i<10; i++)
   {
   	cout<<endl;
   for(int i=0; i<5; i++)
   { 
   char l=rand()%26+65;
   cout<<l;
   
   }
   }

	
	return 0;
}
