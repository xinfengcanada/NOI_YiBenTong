/*
题目描述】
输入学生的人数，然后再输入每位学生的分数和姓名，求获得最高分数的学生的姓名。

【输入】
第一行输入一个正整数N（N <= 100），表示学生人数。接着输入N行，每行格式如下：

       分数 姓名

分数是一个非负整数，且小于等于100；

姓名为一个连续的字符串，中间没有空格，长度不超过20。

数据保证最高分只有一位同学。

【输出】
获得最高分数同学的姓名。

【输入样例】
5
87 lilei
99 hanmeimei
97 lily
96 lucy
77 jim
【输出样例】
hanmeimei
*/
#include<iostream>
using namespace std;

int main(){
	int a,n,max=0;
	string b,maxb;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>a>>b;
	    if(max<=a)
	    {
	        max=a;
	        maxn=b;
	    }
	    
	}
	cout<<maxb;
	return 0;
}
