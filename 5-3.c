#include<stdio.h>
#include<limits.h>

int main(void)
{
    int n;
    int m;
    int i, j;
    int is_prime = 1;
    int prime_len = 0;
    int max_len = -1;
    int last_tmp;
    int last_prime;
    int max = INT_MIN, min = INT_MAX;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        is_prime = 1;
        scanf("%d",&m);
        if(m > 1)
        {
            for(j=2; j<=(m+1)/2; j++)
            {
                if(m%j == 0 || m >= 100)
                {
                    is_prime = 0;
                    break;
                }
            }

            if(is_prime)
            {
                prime_len++;
                last_tmp = m;
            }
            else
            {
                if(max_len < prime_len)
                {
                    max_len = prime_len;
                    last_prime = last_tmp;
                }   
                prime_len = 0;
            }
        }
        if(max < m)
        {   
            max = m;
        }
        if(min > m)
        {
            min = m;
        }

    }

    if(max_len < prime_len)
    {
        max_len = prime_len;
        last_prime = last_tmp;
    }   
    
    if(max_len != -1)
    {
        printf("%d\n%d\n%d %d",max_len, last_prime, max, min);
    }
    else
    {
        printf("0");
    }

    return 0;
}