#include <stdio.h>
int main() {
   int count = 0;
   int a;
   int sum = 0;
   float avg;
   while(a > 0){
     printf("Enter a number : ");
     scanf("%d",&a);
     if(a <= 0){
        break;
     }
     sum = sum + a;
     count++;
  }
   avg = (float)sum/count;
   printf("summation = %d\n",sum);
   printf("average = %.2f\n",avg);
   return 0;
}
