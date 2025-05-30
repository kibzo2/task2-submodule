#include<stdio.h>
#include<stdlib.h>
 #define Intrest_Rate 0.15
int main()
{
 double principal = 50000; 
 double time = 3;
 double Simple_interest = principal*time*Intrest_Rate;

 printf("The Simple interest is %.2lf\n\n",Simple_interest);

 return 0;   
}

