#include <stdio.h>
 
int main()
{
   int reversenum = 0, num;
 
   printf("Enter a number to reverse: ");
   scanf("%d", &num);
 
   while (num != 0)
   {
      reversenum = reversenum * 10;
      reversenum = reversenum + num%10;
      num = num/10;
   }
 
   printf("The reversed number is = %d\n", reversenum);
 
   return 0;
}