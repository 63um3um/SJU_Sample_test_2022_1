#include<stdio.h>
int main() {

   int n,num,streak=0,last_num,max,min,max_streak=0;
   
   scanf("%d", &n);
      
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &num);
      //if (num < 0) {
      //   num *= -1;
      //}


      if (i == 0) {
         max = num;
         min = num;
      }

      if (num < min) {
         min = num;
      }

      if (num > max) {
         max = num;
      }

      if (num > 100) {
         streak = 0;
         continue;
      }
      int tmp = num,div=1,count=0; //to find sosu;
      
      while (tmp > 1) {
         div++;
         if (tmp%div == 0) {
            count++;
         }
         if (div == tmp) {
            break;
         }
      }

      if (count == 1) {
         streak++;
      }
      else {
         streak = 0;
      }

      if (streak > max_streak) {
         max_streak = streak;
         last_num = num;
      }
      

      
   }
   if (max_streak == 0) {
      printf("0");
   }
   else {
      printf("%d\n%d\n%d %d", max_streak, last_num, max, min);
   }
   

   return 0;
}