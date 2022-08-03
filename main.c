#include <stdio.h>
#include <stdlib.h>

int main()
{
#include <stdio.h>

  float a, b;
  char op;

  printf("Enter an operator (+, -, *, /) ");
  scanf("%c",&op);
  printf("entre numbre ");
  scanf("%f",&a);
  printf("entre numbre ");
  scanf("%f",&b);
    switch (op){
    case '+':
      printf("%.2f + %.2f = %.2f", a,b,a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f", a,b,a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f", a,b,a * b);
      break;
    case '/':
        if(b!=0){
           printf("%.2f / %.2f = %.2f", a,b,a / b);
        }else{
            printf("number diviseur doit etre superieur a 0");
        }
      break;
    default:
      printf("Erreur! l'operateur n est pas correct");
      break;
  }




}
