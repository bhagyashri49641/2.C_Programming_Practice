/*
    Problem statement : Accept string from user and return the number of capital characters from that string.
    
 Input : "Hello"
 Output : 1

 Input : "Hello World"
 Output : 2
 
 Input : "A"
 Output : 1
 
 Input : "India_ _IS_ _MY country"
 Output : 5

 Input : "abcdefg"
 Output : 0

 */

#include<stdio.h>

int CountCap(char str[])
{
    int iCnt = 0, i = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            iCnt++;
        }
        
        i++;
    }
    
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
    
    iRet = CountCap(arr);
    
    printf("Total number of capital characters are %d\n",iRet);
    
    return 0;
}
