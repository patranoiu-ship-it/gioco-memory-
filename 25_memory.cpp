#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(int argc, char** argv) {
	srand(time(NULL));
   
   int cart=rand()%4+4;
   char x[7][7];
   char vis[7][7];
   cout << "la matrice ha una dimensione: "<<cart<<"x"<<cart<<endl;
    
    //per nascondere i simboli
    for(int i=0;i<cart;i++)
    {
        for(int j=0;j<cart;j++)
        {
            vis[i][j]='*';
        }
	}	    
   
   //creare le coppie
   char v[49]; //dichiarato v a 49 perchè cosi anche nel caso massimo tutti i simboli sono contenuti
    int k = 0;
    for(int i=0;i<(cart*cart)/2;i++) //serve per creare il numero di coppie
    {  
	    char c=rand()%26+65;
        v[k]=c;
        k=k+1;
        v[k]=c;
        k=k+1;
    }
   
   /*if(cart%2==1)
   {
   	cout<<0;
   }*/
   
   
  

	
	return 0;
}
