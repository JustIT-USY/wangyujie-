#include<stdio.h>
#define N 30
typedef struct data
{
	int year;
	int month;
	int day;
 } DATA;
 typedef struct student
 {
 	long studentID;
 	char studentNAME[10];
 	char studentSex;
 	DATA birthday;
 	int score[4];
 }STUDENT;
 void InputScore(STUDENT stu[], int n, int m);
 void AverScore(STUDENT stu[], float aver[], int n, int m);
 void PrintScore(STUDENT stu[], float aver[], int n, int m);
 int main()
 {
 	float aver[N];
 	STUDENT stu[N];
 	int n;
 	printf("How many student?");
 	scanf("%d",&n);
 	InputScore(stu, n, 4);
 	AverScore(stu, aver, n, 4);
 	PrintScore(stu, aver, n, 4);
 	return 0;
 }
 void InputScore(STUDENT stu[], int n, int m)
 {

 int i, j;
 for (i = 0; i < n; i++)
 {
 	printf("Input record %dd:\n", i+1);
 	scanf("%1d", &stu[i].studentID);
 	scanf("%s", stu[i].studentNAME);
 	scanf("%c", &stu[i].studentSex);
 	scsanf("%d",&stu[i].birthday.year);
 	scanf("%d",&stu[i].birthday.month);
 	scanf("%d",&stu[i].birthday.day);
 	for (j = 0; j < m;j++)
 	{
 		scanf("%d", &stu[i].score[j]);
	 }
 }
}
void AverScore (STUDENT stu[], float aver[], int n, int m)
{
	int i,j, sum[N];
	for (j = 0; j< m; j++)
	{
		sum[i] = 0;
		for ( j= 0; j < m; j++)
		{
		sum[i] = sum[i] + stu[i].score[j];
	    }
	aver[i] = (float)sum[i]/m;
}
}
void PrintScore(STUDENT stu[],float aver[], int n, int m)
{
	int i,j;
	printf("Results:\n");
	for (i = 0; i< n; i++)
	{
		printf("%101d%8s%3c%6d/%02d/%02d",stu[i].studentID,
		                                  stu[i].studentNAME,
										  stu[i].studentSex,
										  stu[i].birthday.year,
										  stu[i].birthday.month,
										  stu[i].birthday.day);
		for (j = 0; j < m; j++)
		{
			printf("%4d", stu[i].score[j]);
		}
		printf("%6.1f\n", aver[i]);
			}
 } 
