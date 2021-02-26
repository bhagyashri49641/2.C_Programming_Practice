/*Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
	if((chDiv=='A')||(chDiv=='a'))
	{
		printf("Exam time is 7 AM\n");
	}
	else if((chDiv=='B')||(chDiv=='b'))
	{
		printf("Exam time is 8:30 AM\n");
	}
	else if((chDiv=='C')||(chDiv=='c'))
	{
		printf("Exam time is 9:20 AM");
	}
	else if((chDiv=='D')||(chDiv=='d'))
	{
		printf("Exam time is 10:30 AM");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter your devision\n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);
}