#include <stdio.h>
 int main()
{
    int i,j,n;
    long sum = 0,temp =0;

    printf("please input a number to n:\n");
    scanf("%d",&n);
    if(n<1)
    {
        printf("the n must not less than 1\n");
        return 0;
    }

    for(i=1;i<n;i++)
    {
        temp =0;
        for(j=1;j<i;j++)
            temp+=j;
        sum+=temp;
    }

    printf("the sum of the sequence(%d) is %d\n",n,sum);
    //getchar();
   // getchar();


}