//4 * 4的二维数组，分别求出主对角线、次对角线上元素之和。
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	int arr[4][4] = { {11,12,43,14},{1,62,13,49},{6,17,182,19} ,{26,78,8,19} };
	a = arr[0][0] + arr[1][1] + arr[2][2] + arr[3][3];
	b = arr[0][3] + arr[1][2] + arr[2][1] + arr[3][0];
	printf("主对角线和为%d，副对角线和为%d", a, b);
	return 0;
}