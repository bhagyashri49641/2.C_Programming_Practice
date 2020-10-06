/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//			1
//			1	1
//			1	0	1
//			1	0	0	1
//			1	0	0	0	1
//			1	1	1	1	1	1
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol;

	for(iRow=1;iRow<=iNum;iRow++)
	{
		for(iCol=1;iCol<=iRow;iCol++)
		{
			if(iRow == iNum || iCol == 1 || iRow == iCol)
			{
				printf("1\t");
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}


}
int main()
{
	int iNum=0;

	printf("\n Enter number rows you want to print => ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);

	return 0;

}