#include<stdio.h>
#include<stdlib.h>//��������ɾ��

	void printArray(int array[], int n)//����Ϊ3
	{
		printf("%d\t", n);//���

		if (n > 0)//����
		{
			printArray(array, n - 1);//3 2 1 0  
			array[0] += array[n - 1];//array[0]=array[0]+array[n - 1] 
		}

		printf("\n%d", array[0]);//��� 30 30+30=60 60+20=80 80+10=90
	}

	void printNumber()
	{
		int a = 3, b = 3;
		while (a)//��aΪfalse��a=0ʱ����ִ�У�a��=0��
		{
			printf("%d\n", a);//ѭ����� 3="3" 3-1="2" 2-1="1" ��Ϊ1-1="0" ��ֹͣ����
			a--;
		}
		//�ڶ���
		printf("%d %d\t", a, b);//0 3

		for (; --b;)
			printf("%d\t", b);//  3-1="2" 2-1="1"
	}

	int main()
	{
		printf("\n********************************\n");// �ڣ�1����

		int arr[] = { 30, 20, 10 };
		printArray(arr, 3);

		printf("\n********************************\n");// �ڣ�2����

		printNumber();
		system("pause");//��������ɾ��
	}
	
