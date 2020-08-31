#include <stdio.h>
#include <stdlib.h>
void main(int rc, char* rv[]) 
{

int a = atoi(rv[1]);
int b = atoi(rv[2]);

int c = atoi( rv[3]);
int d;
 switch(a)
{
case 1:
d=b+c;
printf("sum is %d", d);
break;
case 2:
d=b*c;
printf("product is %d", d);
break;
case 3:
d=b/c;
printf("div answer is %d", d);
break;
case 4:
d=b-c;
printf("subtraction answer is %d", d);
break;




}
}
