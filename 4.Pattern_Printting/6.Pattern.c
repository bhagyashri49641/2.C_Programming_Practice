/*

 Write a program which accept number of rows and columns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
*   #    #   #      11 12 13 14 
#   *    #   #		21 22 23 24
#   #    *   #      31 32 33 34
#   #   #    *      41 42 43 44     i==j
 
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    if(iRow < 0)            // Updator for negative value
    {
        iRow = -iRow;
    }
    if(iCol < 0)            // Updator for negative value
    {
        iCol = -iCol;
    }
    
    if(iRow != iCol)    // Filter for the non square matrix
    {
        printf("Error : Invalid arguments\n");
        
        return;
    }
    
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
                if(i == j)  // For diagonal elements
                {
                    printf("*\t");
                }
                else        // For non diagonal elements
                {
                    printf("#\t");
                }
        }
        printf("\n\n");
        
    }
    
}
int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     Pattern(iValue1, iValue2);
     
     return 0;
 }









