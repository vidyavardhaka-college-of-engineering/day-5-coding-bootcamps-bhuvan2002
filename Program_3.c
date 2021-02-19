//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include <string.h>
int main()
{
	char str[10];
   char string1[20];
  int i, length;
    int flag = 0;
	scanf("%s", str);
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
	//Write your code here
	
	return 0;
}
