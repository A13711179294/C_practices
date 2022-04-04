//中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱百鸡问题”
//一只公鸡值5钱，一只母鸡值3钱，三只小鸡值1钱，现在要用百钱买百鸡，请问公鸡、母鸡、小鸡各多少只？
#include<stdio.h>
int main() 
{
	int a, b, c;//a：公鸡 b：母鸡 c：小鸡
	for (a = 0; a <= 20; a++)
	{
		for (b = 0; b <= 33; b++)
		{
			c = 100 - a - b;
			if (a * 5 + b * 3 + c / 3.0 == 100)
				printf("公鸡%d只 母鸡%d只 小鸡%d只\n", a, b, c);
		}
	}
	return 0;
}