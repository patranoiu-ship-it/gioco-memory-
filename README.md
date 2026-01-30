# gioco-memory-

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(int argc, char** argv) {
	srand(time(NULL));
	
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
