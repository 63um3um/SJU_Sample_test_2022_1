#include<stdio.h>

int main(void)
{
    int f,s;
    double tot;

    scanf("%d %d",&f,&s);
    tot = f*0.4+s*0.6;
    
    if(tot >= 85.5)
    {
        printf("A ");
    }
    else if(tot >= 75.5)
    {
        printf("B ");
    }
    else if(tot >= 60.0)
    {
        printf("C ");
    }
    else
    {
        printf("F ");
    }

    if(tot >= 60 || s >= 90)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }

    return 0;

}