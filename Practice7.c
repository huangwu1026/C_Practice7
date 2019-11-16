//实现一个函数，打印打印一个乘法口诀表，口诀表的的行数和列数自己指定，输入9，输出99口诀表，输入12，，输出1212的乘法口诀表
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Print(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d=%d   ", i, j, i*j);
		}
		printf("\n");
	}
}
int main(){
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	Print(num);
	system("pause");
	return 0;
}
//使用函数实现两个数的交换
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a, b;
	printf("please enter two number:");
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("the swapped is:%d %d\n", a, b);
	system("pause");
	return 0;
}
//实现一个函数判断year是不是闰年
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void IsLeapyear(int year){
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d is leapyear\n", year);
	}
	else
		printf("%d is not leapyear\n", year);
}
int main(){
	int year;
	printf("please enter a year:");
	scanf("%d", &year);
	IsLeapyear(year);
	system("pause");
	return 0;
}
//创建一个数组，实现函数init()初始化数组、实现empty()清空数组、实现reverse()函数完成数组元素的逆置。要求:自己设计函数的参数，返回值
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int arr[], int sz){
	printf("the result of init is:   ");
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz){
	int temp;
	int left = 0, right = sz - 1;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	printf("the result of reverse is:");
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void empty(int arr[], int sz){
	for (int i = 0; i < sz; i++){
		arr[i] = 0;
	}
	printf("the result of empty is:  ");
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[8] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("please enter a number:   ");
	for (int i = 0; i < sz; i++){
		scanf("%d", &arr[i]);
	}
	init(arr, sz);
	reverse(arr, sz);
	empty(arr, sz);
	system("pause");
	return 0;
}
//.实现一个函数，判断一个数是不是素数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int IsPrime(int n){
	if (n == 0 || n == 1){
		return 0;
	}
	for (int i = 2; i < = sqrt(n); i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	if (IsPrime(num)){
		printf("%d is prime", num);
	}
	else{
		printf("%d is not prime", num);
	}
	system("pause");
	return 0;
}
