/* Write a program which accept string from user and convert it into
upper case.
Input : Bhagyashri Mane
Output : BHAGYASHRI MANE
*/

#include<stdio.h>

void struprx(char str[])
{
  if(str==NULL)
  {
    return;
  }
  while(*str !='\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - 32;
    }
    str++;
  }
}

int main()
{
  char arr[20]={'\0'};

  printf("Enter string:\n");
  scanf("%[^'\n']s",arr);

  struprx(arr);
  printf("Modified string is:\n%s",arr);
  return 0;
}
