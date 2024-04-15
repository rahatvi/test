#include <stdio.h>
int main()
{
    float a,b,c;
    float Perimeter;
    float Area;

    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
      Perimeter=(a+b+c);
      printf("Perimetro = %.1f\n",Perimeter);
    }

    else{
        Area=(0.5*(a+b)*c);
        printf("Area = %.1f\n",Area);
    }

}
