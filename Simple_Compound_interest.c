//simple and compond interest
#include <stdio.h>
#include <math.h>
int main()
{
	int p,r,t,n; 
	float si,ci; 
	printf(" write the principle: "); 
	scanf("%d",&p); 
	printf("\nwrite the rate:"); 
	scanf("%d",&r); 
	printf("\n write the time"); 
	scanf("%d",&t); 
	printf("si=%f",p*r*t*0.01); 
	printf("number of times compounded="); 
	scanf("%d",&n); 
	printf("\nci=%f",p*pow((1+(r*t*0.01)),n)); 
	return 0; 
}
