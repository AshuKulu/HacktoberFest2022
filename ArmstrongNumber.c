#include<stdio.h>
int main()
{
   int num,copy_of_num,sum=0,rem;

   //Store input number in variable num
   printf("\nEnter a number:");
   scanf("%d",&num);

   /* Value of variable num would change in the
      below while loop so we are storing it in 
      another variable to compare the results 
      at the end of program
   */
   copy_of_num = num;

   /* We are adding cubes of every digit
    * and storing the sum in variable sum
    */ 
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }

   /* If sum of cubes of every digit is equal to number
    * itself then the number is Armstrong
    */
   if(copy_of_num == sum)
      printf("\n%d is an Armstrong Number",copy_of_num);
   else
      printf("\n%d is not an Armstrong Number",copy_of_num);
   return(0);
}
