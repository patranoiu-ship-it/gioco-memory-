#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(int argc, char** argv) {
	srand(time(NULL));
   
   int cart=rand()%4+4;
   char x[cart][cart];
   cout<<cart;
   
   for(int i=0; i<cart; i++)
   {
   	char l=rand()%26+65;
    cout<<l;
   }
   
   /*if(cart%2==1)
   {
   	cout<<0;
   }*/
   
   
   /*
   for(int i=0; i<7; i++)
   {
   	cout<<endl;
   for(int i=0; i<7; i++)
   { 
   char l=rand()%26+65;
   cout<<l;
    
   }
   }
   */

	
	return 0;
}
