#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
struct marrirdState
{
	struct date marryDay;
	char spouseName[20];
	int child;
};
struct divorceState 
{
	struct date divorceDay;
	int child;
};
union marritalState
{
	int single;
	struct marriedState married;
	struct divorceState ndivorce
}
	struct person
	{
		char name[20];
		char sex;
		int age;
		union marritalState marrital;
		int marryFlag;
	}
main()
{
	printf("%d/")
}

