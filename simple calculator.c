#include<conio.h>
#include<stdio.h>

int main()
{
    double a,c;
    char b;
    printf("enter any no.");
    scanf("%lf",&a);
    printf("enter the symbol which should perform task");
    fflush(stdin);
    scanf("%c",&b);
    printf("enter the second no.");
    scanf("%lf",&c);

    switch(b)
    {
      case '+':
        {
            printf(" %lf + %lf =%lf",a,c,a+c);
            break;
        }
      case '-':
        {
         printf("%lf - %lf = %lf",a,c,a-c);
         break;
        }
     case '*':
        {
         printf("%lf * %lf = %lf",a,c,a*c);
         break;
        }
     case '/':
        {
            printf("%lf / %lf = %lf",a,c,a/c);
            break;
        }

    }
    getch();
}
