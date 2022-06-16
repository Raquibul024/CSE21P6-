#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d, x, x1, x2;
    printf("Enter values of a, b, c :\n");
    scanf("%d\n%d\n%d",&a, &b, &c);
    d= ((b*b)-(4*a*c));
    if(d>0)
    {
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        printf("The solutions are: x1=%.5f, x2=%.5f\n",x1,x2);
    }
    else if(d==0)
    {
        x=((-b)/(2*a));
        printf("The solution is: x=%.5f\n",x);
    }
    else
    {
        printf("There is no real solution\n");
    }
    return 0;
}
