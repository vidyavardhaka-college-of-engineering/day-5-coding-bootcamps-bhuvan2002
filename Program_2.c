//You will be given a string 'str'. Your task is 
//Input: vvce & Output: ecvv
#include<stdio.h>

int main()
{
  char str[10],rev[10];
  int count=0, end, begin , i;
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
   for(i=0;i<str[10];i++)
   {
     if(str[i]==rev[i])
     {
       printf("it is ap");
     }
     else
     printf("It is not a p");
   }

   return 0;

}

