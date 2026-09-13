#include <stdio.h>
 int main(){
float num;
printf("Enter a Decimal number\n");
scanf("%f", &num);
printf("Number with 1 decimal place : %.1f\n",num);
printf("Number with 3 decimal places : %.3f\n",num);

    return 0;
}