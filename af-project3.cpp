#include <stdio.h>//�������ࣺС��
#include <stdlib.h>//����Ҫ�󣺳���ÿ�����������
#include <string.h>
#include<stdlib.h>//��������ɾ
#define M 3
#define N 4
int main(){
	int arr[M][N] = { 0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11,
	};//����
	int b[M][N] = { 0 };
	int sun;
	for (int i = 0; i <M; i++) {
		for (int j = 0; j< N; j++) {
			sun = 0;
			if (i == 0 || 2 == i)//��������
			{
				if (i == 0)
				{
					sun += arr[i + 1][j];//�ڵ�һ��
				}
				else if (i == 2)
				{
					sun += arr[i - 1][j];//�ڵ�����
				}
			}
			else
			{
				sun += arr[i + 1][j] + arr[i - 1][j];//�ڵڶ���
			}
			if (j == 0)
			{

				sun += arr[i][j + 1] + arr[i][j];//�ڵ�һ��
			}
			else if (j == 3)
			{
				sun += arr[i][j] + arr[i][j - 1];//�ڵ�����
			}
			else
			{
				sun += arr[i][j] + arr[i][j + 1] + arr[i][j - 1];//�ڶ� ����
			}

			b[i][j] = sun;
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j< N; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}