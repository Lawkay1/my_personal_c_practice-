#include <stdio.h> 

void increment(int x) {
x =x +1; 
}
// Call by reference 
int main () {
int a = 5;
printf("%d", a);
increment(x);
printf("%d", x);
return 0;
}