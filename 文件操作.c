#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int i;
	if((fp = fopen("demo.txt","wb")) == NULL)
	{
		printf("Faliure to open demo.bin!\n");
		exit(0);
	 } 
	 for (i = 0; i < 128; i++)
	 {
	 	fpuct(i, fp);
	 	
	 }
	 fclose(fp);
	 if ((fp = fopen("demo.txt","rb")) == NULL)
	 {
	 	printf("Failure to open demo.bin£¡\n");
	 	exit(0);
	 }
	 /* 
	 while((ch = fgetc(fp)) != EOF)
	 {
	 	putchar(ch);
	 }
	 */
	 ch = fgetc(fp);
	 while(!feof(fp))
	 {
	 	putchar(ch);
	 	ch = fgetc(fp);
	  } 
	 fclose(fp);
	 return 0;
}
