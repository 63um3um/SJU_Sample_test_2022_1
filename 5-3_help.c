    #include <stdio.h>

    int main() {

        int n, num, dec = 0, last_dec, dec_num = 0, max_dec_num = 0, max, min;
        // int tmp;

        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &num);

            if (i == 1)
            {
                max = num;
                min = num;
            }

            max = max >= num ? max : num;
            min = min <= num ? min : num;

            // tmp = num;

            if (num >= 100)
            {
                num = 99;
            }

            for (int j = 2; j <= num; j++)
            {   
                if (num % j == 0)
                {
                    dec++;
                }
            }
            // num = tmp;
            
            if (dec == 1) //prime
            {
                dec_num++;
                if (max_dec_num < dec_num)
                {
                    max_dec_num = dec_num;
                    last_dec = num;
                }
            }
            else
            {
                dec_num = 0;
            }
            
            dec = 0;

        }

        if (max_dec_num == 0)
        {
            printf("0");
        }

        else
        {
            printf("%d\n", max_dec_num);
            printf("%d\n", last_dec);
            printf("%d %d", max, min);
        }

        return 0;
    }