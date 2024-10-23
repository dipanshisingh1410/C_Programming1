//conversion
#include<stdio.h>
int main()
{ 
 int dis; 
 printf("enter the distance in km: "); 
 scanf("%d",&dis); 
 printf("distance in meters:%d \ncentimeter:%d\n millimeter:%d\n",dis*1000,dis*100000,dis*1000000); 
 return 0;  
}