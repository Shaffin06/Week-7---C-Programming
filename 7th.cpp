#include <stdio.h>
struct student
	{
		unsigned int rno : 10;
		unsigned int status:1;
		unsigned int date:5;
		unsigned int month:4;
		unsigned int year:15;
	}s1;
int main()
{
	struct student s1;
	s1.rno=15;
	s1.status=0;
	s1.date=20;
	s1.month=5;
	s1.year=2024;
	printf("Roll No. = %d\n",s1.rno);
	printf("Status = %d\n",s1.status);
	printf("Date = %d\n",s1.date);
	printf("Month = %d\n",s1.month);
	printf("Year = %d",s1.year);
	return 0;
}
