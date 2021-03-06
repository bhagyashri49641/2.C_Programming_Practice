/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//		1
//		1	1
//		1	2	3
//		1	2	3	6
//		1	2	3	4	10
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol;

	int iSum=1;
	
	for(iRow=1;iRow<=iNum;iRow++)
	{
		for(iCol=1;iCol<=iRow;iCol++)
		{
			if(iRow == iCol)
			{
				printf("%d\t",iSum);
			}
			else
			{
				printf("%d\t",iCol);
				iSum=iSum+iCol;
			}
		}
		iSum=0;
		printf("\n");
	}
}
int main()
{
	int iNum=0;

	printf("\n Enter number of rows you want to print => ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);

	return 0;

}