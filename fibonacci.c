#include <iostream>>
void displaylog(int n); 
int fibonacciSeries(int number) {
   int n1=0,n2=1,n3,i; 
   displaylog(n1); 
   displaylog(n2); 
   for(i=2;i<number;++i) { 
      n3=n1+n2; 
	  //displaylog(n); 
	  displaylog(n3);
	  n1=n2; n2=n3;
   }
   return 0; 
}