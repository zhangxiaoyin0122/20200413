#include <stdio.h>
#include <stdlib.h>
int StrToInt(char* string) {
	int number = 0;
	while (*string != 0) {
		number = number * 10 + *string - '0';
		++string;
	}
	return number;
}
int main() {
	char string[] = "sfj358f8e3n";
	int ret = StrToInt(string);
	printf("%d", ret);
	system("pause");
	return 0;
}
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

#include <stdio.h>
#include <stdlib.h>
int main() {
	int arrA[4] = { 1,3,5,7 };
	int arrB[4] = { 2,4,6,8 };
	int arrC[4];
	int i = 0;
for (; i < sizeof(arrA) / sizeof(arrA[0]); i++) {
		arrC[i] = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = arrC[i];
}
for (i = 0; i < sizeof(arrA) / sizeof(arrA[0]); i++){
		printf("%d", arrA[i]);
}
printf("\n");
for (i = 0; i < sizeof(arrB) / sizeof(arrB[0]); i++) {
	printf("%d", arrB[i]);
}
	printf("\n");
	system("pause");
	return 0;
}

//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	double sum = 0, sum1 = 0, sum2 = 0;
for (i = 1; i <= 99; i += 2){
		sum1 = sum1 + 1.0 / i;
	}
for (i = 2; i <= 100; i += 2){
		sum2 = sum2 - 1.0 / i;
	}
	sum = sum1 + sum2;
	printf("%lf", sum);
	system("pause");
	return 0;
}

//3.编写程序数一下 1到 100 的所有整数中出现多少次数字9

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10 == 9){
			count++;
		}
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}
//4. 给定两个整形变量的值，将两个值的内容进行交换。

#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 10;
	int b = 20;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;

}

//5. 不允许创建临时变量，交换两个数的内容

#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 10;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}