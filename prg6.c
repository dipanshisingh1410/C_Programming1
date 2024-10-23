//swap without third variable 
#include <stdio.h> 
int main()
{ int a,b; 
printf("enter the two numbers :"); 
scanf("%d%d",&a,&b); 
b=a+b; 
a=b-a; 
b=b-a;
printf("the reversed values of a and b are %d %d",a,b); 
return 0;

}