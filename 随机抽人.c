#include <iostream.h>
#include <time.h>
using namespace std;
int main()
{
 const int n = 10;//�������������
 int number[n] = { NULL };//����������洢������
 srand((unsigned)time(NULL));//��ʼ���������
 number[0] = rand() % n;//��һ�����������Ƚ�
 cout << number[0] << " ";
 for (int i = 1; i < n; i++)//���������ѭ������
 {
  int j = 0;
  number[i] = rand() % n;//���������
  while (1)
  {
   if (number[i] == number[j])//������ͬ�����ѭ�����°��������
   {
    number[i] = rand() % n;//���������
    j = 0;//��������ͬ�ľʹ�ͷ����
    continue;
   }
   if (j == (i - 1))//�������������
    break;
   j++;
  }
  cout << number[i] << " ";
 }
 cout << endl;
 return 0;
}
