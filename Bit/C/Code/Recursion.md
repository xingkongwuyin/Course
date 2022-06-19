## 接受一个整形值（无符号），按照顺序打印它的每一位。这里指定1234

```c
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

void  print(int a)
{
	if (a < 9){
		printf("%d\t",a);
	}
	else {
		print(a / 10);
		printf("%d\t",a%10);
	}
}
int main()
{
	int x = 1234;
	print(x);
}
```

## 求字符串的长度

```c
// 求字符串的长度，不允许创建临时变量
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int strlen(char* str)
{
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1+strlen(str+1);
	}
}

int main()
{
	char arr[]="songguangjin";
	printf("%d",strlen(arr));
	
}
```

##  求第n个斐波那契数

```C
// 求第n个斐波那契数 
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int strlen(int x)
{
	if (x == 1) {
		return 1;
	}
	else if (x == 2) {
		return 1;
	}
	else {
		return strlen(x - 1) + strlen(x - 2);
	}
}

int main()
{
	int a = 5;
	printf("%d",strlen(a));
	
}
```

##  求整形数值数组前n项和 

```c
// 求整形数值数组前n项和
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int sum(int arr[], int n)
{
	if (n == 0) {
		return arr[0];
	}
	else {
		return sum(arr,n-1)+arr[n];
	}
		 
}

int main()
{
	int arr[3] = {3,2,1};
	printf("%d", sum(arr, 2));   //求整形数值数组前n项的最大值
	
}

```

##  求整形数值数组前n项和

```c
// 求整形数值数组前n项最大值
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int max(int arr[], int n)
{
	if (n ==0) {
		return arr[0];
	}
	else if (max(arr, n-1) <=arr[n]) {
		return arr[n];
	}
	else {
		return max(arr,n-1);
	}
		 
}

int main()
{
	int arr[3] = {3,2,1};
	printf("%d", max(arr, 2));   //n项中的n是指数组的下标
	
}

```

## Hanoi

```C
// Hanoi
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int Hanoi(int n, char A, char B, char C) {
	if (n == 1){
		printf("%c-->%c\n",A,C);
}
	else {
		Hanoi(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);
		Hanoi(n - 1, B, A, C);
	}
}

int main() {
	Hanoi(3,'A','B','C');  // 3层汉诺塔
	return 0;
}

```

## 青蛙跳台阶

```C
// 一只青蛙可以跳上一级台阶，也可以跳上二级台阶，求青蛙跳上n级台阶有多少种办法 
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int strlen(int x)
{
	if (x == 1) {
		return 1;          // 跳上一层台阶，有一种办法
	}
	else if (x == 2) {
		return 2;          // 跳上两层台阶，有两种办法
	}
	else {
		return strlen(x - 1) + strlen(x - 2);
	}
}

int main()
{
	int a = 5;
	printf("%d",strlen(a));
	
}
```

## 编写一个递归函数

> * 弄清这个递归函数的功能是什么，怎么调用这个函数，即设计好递归函数的返回值和参数列表
> * 什么时候应该结束这个递归，它的边界条件（出口）是什么
> * 在非边界条件下，怎么从第n层转到第n+1层（递推公式）
>
> 

## 求n的k次方

```C
// 求n的k次方
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int hh(int a, int k) {
	if (k == 1)
		return a;
	else {
		return hh(a, k - 1) * a;
	}
}

int main() {
	printf("%d", hh(7, 2));
	return 0;
}
```

##  输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int Digitsum(int a) {
	if (a < 9){
		return a;
	}
		
	else {
		return (a % 10) + Digitsum(a / 10);
	}
}

int main() {
	printf("%d", Digitsum(1234));
	return 0;
}
```

## 字符串的翻转

```C
// 递归实现字符串反转
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int reverse(char arr[], int n) {
	if (n == 0) {
		printf("%c\t", arr[0]); 
	}
	else {
		printf("%c\t", arr[n]);
		reverse(arr, n-1);
		
	}
	

}

int strlen(char* arr)
{
	if (*arr == '\0') {
		return 0;
	}
	else {
		return 1 + strlen(arr + 1);
	}
}

int main() {
	char arr[] = "songguangjin";
	reverse("songguangjin", strlen (arr)-1); // 数组的项数与数组的长度相差1
	return 0;
}


```

## 递归和非递归求字符长度

```C
// 递归。字符串的长度
int strlen1(char* arr)
{
	if (*arr == '\0') {
		return 0;
	}
	else {
		return 1 + strlen(arr + 1);
	}
}
#include<stdio.h>
// 非递归。求字符串的长度
int strlen2(char* arr)
{
	int num = 0;
	while (*arr ！= '\0') {
		num++;
		arr++;
	}
	return num;
}
int mian() {
	printf("%d", strlen2("songguangjin"));
	return 0;
 }

```

* > 对于蛇形递归，传值调用的参数，函数结束时不需要还原，但传址调用的参数需要还原。
  >
  > 蛇形递归典型的就是树的递归，因为递归完同一层级的左子树，还有递归同一层级的右子树，所用到的参数都是一致的，所以递归完需要还原

