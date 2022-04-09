#include <stdio.h>
#include <stdlib.h>

int main () {

int a = 20 ;
int *p = &a ;
 printf ("%d \n", a);
 printf ("%d \n", p);
 printf ("%d \n", &p); 
 printf ("%d \n", *p);
int b = 5;
 *p = b ;

 printf("%d \n", a);
printf ("%d", &a);
/** Incrementing and Decrementing a pointer
 * **/
 printf ("Seeing the address of a \n as stated above, and knowing that the size of an integer is %d \n we can conclude that the adress a+1 is %d \n value at address P+1 is %d ", sizeof(int), p+1, *(p+1));
 

 /** Pointer to pointer */
int **y = &p; 
int ***u = &y; 
printf ("%d \n", y); 
printf ("%d \n", u);
printf ("%d \n", **y);
printf ("%d \n", ***u);
 return 0;
}