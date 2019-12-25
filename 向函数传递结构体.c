
#include<stdio.h>
struct data
{
	int year;
	int month;
	int day;
 } ;
 void Func(struct data *pt)
 {
 	pt->year = 2000;
	 pt->month = 5;
	 pt->day = 22; 
 }
 int main()
 {
 	struct data d;
 	d.year = 1999;
 	d.month = 4;
 	d.day = 23;
 	printf("Before function call;%d/%02d/%02d \n", d.year, d.month,d.day);
 	Func(&d);
 	printf("After function call:%d/%02d/%02d\n",d.year,d.month,d.day);
 	return 0;
 }
