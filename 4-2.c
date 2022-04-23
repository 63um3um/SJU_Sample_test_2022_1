#include<stdio.h>
#include<limits.h>

int main(void)
{
    int n;
    int tmp;
    int n_sym;
    int max = INT_MIN;
    int min = INT_MAX;
    int cnt3 = 0;

    while (1)
    {
        scanf("%d",&n);
        cnt3 = 0;
        if(n == 0)
        {
            break;
        }
        tmp = n;
        n_sym = n;
        while (tmp)
        {
            n_sym *= 10;
            n_sym += tmp%10;
            if(tmp%10 == 3)
            {
                cnt3 ++;
            }
            tmp /= 10;
        }
        if(n_sym > max)
        {
            max = n_sym;
        }
        if(n_sym < min)
        {
            min = n_sym;
        }
        printf("%d %d ",n_sym,cnt3*2);
    }
    printf("\n%d %d",min,max);

    return 0;
    
}