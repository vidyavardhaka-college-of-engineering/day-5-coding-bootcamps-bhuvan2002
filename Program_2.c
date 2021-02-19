//You will be given a string 'str'. Your task is 
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
  char str[10],rev[10];
  int count=0, end, begin;
  scanf("%s", str);

  //Write your code here
 while (str[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) 
   {
      rev[begin] = str[end];
      end--;
   }

   rev[begin] = '\0';

   printf("%s\n", rev);

   return 0;

}
