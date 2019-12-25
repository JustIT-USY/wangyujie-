#include<stdio.h>
union sample
{
	short i;
	char j;
	double ch;
};
typedef union sample SAMPLE;
int main()
{
	printf("bytes = %d\n", sizeof(SAMPLE));
	return 0;
}
