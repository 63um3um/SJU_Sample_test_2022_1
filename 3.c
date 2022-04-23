#include<stdio.h>

int main(void)
{
    int large_cnt = 0;
    int small_cnt = 0;
    int num_sum = 0;
    int etc_cnt = 0;
    char input;

    while (1)
    {
        scanf("%c",&input);
        if (input == '*')
        {
            break;
        }
        if(input >= 'A' && input <= 'Z')
        {
            large_cnt++;
        }
        else if(input >= 'a' && input <= 'z')
        {
            small_cnt++;
        }
        else if(input >= '0' && input <= '9')
        {
            num_sum += (input-'0');
        }
        else
        {
            etc_cnt++;
        }
    }

    printf("%d %d %d %d",large_cnt,small_cnt,num_sum,etc_cnt);
    
    return 0;
}