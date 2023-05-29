#include<stdio.h>
#include<stdlib.h>//正常机可删除

	void printArray(int array[], int n)//后定义为3
	{
		printf("%d\t", n);//输出

		if (n > 0)//定义
		{
			printArray(array, n - 1);//3 2 1 0  
			array[0] += array[n - 1];//array[0]=array[0]+array[n - 1] 
		}

		printf("\n%d", array[0]);//输出 30 30+30=60 60+20=80 80+10=90
	}

	void printNumber()
	{
		int a = 3, b = 3;
		while (a)//当a为false或a=0时，不执行（a！=0）
		{
			printf("%d\n", a);//循环输出 3="3" 3-1="2" 2-1="1" 因为1-1="0" 故停止（）
			a--;
		}
		//第二题
		printf("%d %d\t", a, b);//0 3

		for (; --b;)
			printf("%d\t", b);//  3-1="2" 2-1="1"
	}

	int main()
	{
		printf("\n********************************\n");// 第（1）题

		int arr[] = { 30, 20, 10 };
		printArray(arr, 3);

		printf("\n********************************\n");// 第（2）题

		printNumber();
		system("pause");//正常机可删除
	}
	
