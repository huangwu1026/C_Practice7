//ʵ��һ����������ӡ��ӡһ���˷��ھ����ھ���ĵ������������Լ�ָ��������9�����99�ھ�������12�������1212�ĳ˷��ھ���
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
//ʹ�ú���ʵ���������Ľ���
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
//ʵ��һ�������ж�year�ǲ�������
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
//����һ�����飬ʵ�ֺ���init()��ʼ�����顢ʵ��empty()������顢ʵ��reverse()�����������Ԫ�ص����á�Ҫ��:�Լ���ƺ����Ĳ���������ֵ
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
//.ʵ��һ���������ж�һ�����ǲ�������
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
