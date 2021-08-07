#include <stdio.h>
int  main()
{
    float a,b,c;
    printf("please input x and y\n");
    scanf("%f%f",&a,&b);
    c=a>b?a:b;
    printf("MAX of (%f %f) is %f ",a,b,c);

}