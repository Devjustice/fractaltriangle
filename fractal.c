#include <stdio.h> 
 
  int y,i,x,y;
void printSierpinski(int n) 
{ 
    for ( y = n - 1; y >= 0; y--) { 
  
        // printing space till 
        // the value of y 
        for ( i = 0; i < y; i++) { 
            printf(" "); 
        } 
  
        // printing '*' 
        for ( x = 0; x + y < n; x++) { 
  
        // printing '*' at the appropriate position 
        // is done by the and value of x and y 
        // wherever value is 0 we have printed '*' 
        if((x & y)!=0 )
           printf(" "" ") ;
        else
            printf("* "); 
        } 
  
   printf("\n");
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 32; 
  
    // Function calling 
    printSierpinski(n); 
  
    return 0; 
} 
