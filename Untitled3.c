#include<stdio.h>
sturuct date
{
	int year;
	int month;
	int day;
};
struct date Func(struct date p)
{
	p.year = 200;
	p.month = 5;
	p.day = 22;
	return p;
}
int main()
{
	struct date d;
	d.year = 1999;
	d.month = 4;
	d.day = 23;
	printf("Before function call:%d/%02d/%02d\n",d.month, d.day);
	d = Func)
}

