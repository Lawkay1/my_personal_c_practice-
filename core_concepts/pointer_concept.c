#include <stdio.h>
#include <stdlib.h>

int main () {

int a = 20 ;
int *p = &a ;
 printf ("%d \n", a);
 printf ("%p \n", p);
 printf ("%p \n", &p); 
 printf ("%d \n", *p);

 *p = 15 ;

 printf("%d \n", a);

 return 0; 

}