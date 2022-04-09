#include <stdio.h>
#include <stdlib.h>

int main () {

int a = 20 ;
int *p = &a ;
 printf ("%d \n", a); // Value of a 
 printf ("%d \n", p); // Address of a 
 printf ("%d \n", &p); // Adress of p
 printf ("%d \n", *p); // Value of p which is now the value of a
int b = 5;
 *p = b ; // This makes the value of p which is the value of a become the value of b which is 5 

 printf("%d \n", a); // we have succesfully altered the value of a
printf ("%d \n", &a); // This shows the address of a remains unchanged 
/** Incrementing and Decrementing a pointer
 * **/
/* printf ("Seeing the address of a \n as stated above, and knowing that the size of an integer is %d \n we can conclude that the adress a+1 is %d \n value at address P+1 is %d", sizeof(int), p+1, *(p+1));
 */

 /** Pointer to pointer */
int **y = &p; // p is a pointer so we use double * to create  pointer to a pointer
int ***u = &y; // u is a pointer to a pointer to a pointer, so we use a triple *
printf ("%d \n", y); // we print the address of p which is stored into y 
printf ("%d \n", u);// we print the address of y which is stored in u
printf ("%d \n", **y);// we print the value of y which is the value of p which is the value of a
printf ("%d \n", ***u);// we print the value of u which is the value of y which is the value of p which is the value of a. 
 return 0;
}