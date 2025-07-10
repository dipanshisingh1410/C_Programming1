//swap two numbers
#include <stdio.h> 
int main ()
{ int a,b,t; 
printf("enter the value of a and b"); 
scanf("%d%d",&a,&b); 
t=a; 
a=b; 
b=t; 
printf("the reversed values of a and b are %d and %d respectively",a,b); 
return 0; 
}
