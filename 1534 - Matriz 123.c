#include <stdio.h>
int main ()
{
   int r, c, N, i, j;
   
   while (scanf (" %d", &N) == 1) {
       
      for (i = 0; i < N; i++) {
          
         for (j = 0; j < N; j++) {
             
            if (i+j == N-1) 
            
            printf ("2");
            
            else if (i == j) 
            printf ("1");
            
            else
            printf ("3");
            
         }
         
         printf ("\n");
      }
   }
   return 0;
}
