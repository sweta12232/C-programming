#include<stdio.h>
int main(){
int a = 50, b = 40, *p1 = & a, *p2 = &b;
//before swapping value
printf("The value of a and b before swapping\n");
printf("The value of a  is %d \n", *p1 );
printf("The value of b  is %d \n", *p2 );

//after swapping
*p1 = *p1 + *p2;
*p2 = *p1 - *p2;
*p1 = *p1 - *p2;
printf("The value of a and b before swapping\n");
printf("The value of a  is %d\n", *p1 );
printf("The value of b  is %d\n", *p2 );
}
