#include <stdio.h>
#include <stdlib.h>


int main()
{
    double num1;
    double num2;
    char Op;
printf("Enter a  number: \n");
  scanf("%lf",&num1);
printf("Enter an operator: \n");
scanf(" %c",&Op);
printf("Enter a number: \n");
scanf("%lf",&num2);
if (Op=='+'){
    printf("%f",num1+num2);
}
else if(Op=='-'){
    printf("%f",num1-num2);
}
else if(Op=='*'){
    printf("%f",num1*num2);}
   else if(Op=='/'){
    printf("%f",num1/num2);}
    else{
        printf("Invalid operator");
    }



 return 0;
}
