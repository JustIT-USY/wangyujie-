#include <iostream.h>
#include <time.h>
using namespace std;
int main()
{
 const int n = 10;//定义随机数个数
 int number[n] = { NULL };//定义随机数存储的数组
 srand((unsigned)time(NULL));//初始化随机函数
 number[0] = rand() % n;//第一个随机数无需比较
 cout << number[0] << " ";
 for (int i = 1; i < n; i++)//其余随机数循环产生
 {
  int j = 0;
  number[i] = rand() % n;//产生随机数
  while (1)
  {
   if (number[i] == number[j])//若有相同则继续循环重新安排随机数
   {
    number[i] = rand() % n;//产生随机数
    j = 0;//若遇到相同的就从头遍历
    continue;
   }
   if (j == (i - 1))//若遍历完就跳出
    break;
   j++;
  }
  cout << number[i] << " ";
 }
 cout << endl;
 return 0;
}
