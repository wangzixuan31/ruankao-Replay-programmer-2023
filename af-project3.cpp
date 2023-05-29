#include <stdio.h>//该题主编：小王
#include <stdlib.h>//该题要求：初表每个数接壤相加
#include <string.h>
#include<stdlib.h>//正常机可删
#define M 3
#define N 4
int main(){
	int arr[M][N] = { 0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11,
	};//初表
	int b[M][N] = { 0 };
	int sun;
	for (int i = 0; i <M; i++) {
		for (int j = 0; j< N; j++) {
			sun = 0;
			if (i == 0 || 2 == i)//按行排列
			{
				if (i == 0)
				{
					sun += arr[i + 1][j];//在第一行
				}
				else if (i == 2)
				{
					sun += arr[i - 1][j];//在第三行
				}
			}
			else
			{
				sun += arr[i + 1][j] + arr[i - 1][j];//在第二行
			}
			if (j == 0)
			{

				sun += arr[i][j + 1] + arr[i][j];//在第一列
			}
			else if (j == 3)
			{
				sun += arr[i][j] + arr[i][j - 1];//在第四列
			}
			else
			{
				sun += arr[i][j] + arr[i][j + 1] + arr[i][j - 1];//在二 三列
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