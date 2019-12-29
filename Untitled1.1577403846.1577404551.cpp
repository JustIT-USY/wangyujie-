#include<stdio.h>
#include<stdlib.h>
#define N 80
int main()
{
	FILE *fp;
	char str[N];
	if ((fp=fopen("demo.txt","a"))== NULL)
	{
		printf("FAILURE TO OPEN DEMO,TXT!\N")
		EXIT(0);
	 } 
	 get(str);
	 fputs(str, fp);
	 fclose(fp);
	 
}

