#include<stdio.h>

int main(void)
{
    char input;
    char little_last = 96;
    char large_first = 65+27;
    int first_is_large = 0; // 0 == small, 1 == large
    int is_first = 1;
    int only_small = 1;
    int only_large = 1;

    while (1)
    {
        scanf("%c",&input);
        if(input == '0')
        {
            break;
        }
        if(is_first)
        {
            if(input >= 'a' && input <= 'z')
                first_is_large = 0;
            else if(input >= 'A' && input <= 'Z')
                first_is_large = 1;
            is_first = 0;
        }
        if(input >= 'a' && input <= 'z')
        {
            only_large = 0;
            if(input >  little_last)
            {
                little_last = input;
            }
        }
        else if(input >= 'A' && input <= 'Z')
        {
            only_small = 0;
            if(input < large_first)
            {
                large_first = input;
            }
        }
    }

    if(only_small)
    {
        printf("%c",little_last);
    }
    else if(only_large)
    {
        printf("%c",large_first);
    }
    else
    {
        if(first_is_large)
        {
            printf("%c%c",large_first,little_last);
        }
        else
        {
            printf("%c%c",little_last,large_first);
        }
    }
    return 0;
    
}