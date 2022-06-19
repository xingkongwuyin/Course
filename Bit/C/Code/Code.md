

## 写一个代码：打印100~200之间的素数

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
	int main()
	{
		int i = 100;
		int j = 0;
		int a = 0;
		do 
		{
			j= i - 1;
			do
			{ 
				a = i % j;
				if (a == 0)
				{
					break;
				}
				j--;
			} while (j >= 2);
			if (a != 0)
			{
			printf("%d ",i);
			}
			i++;
		} while (i <= 200);
		return 0;
	}

```

## 打印1000到2000之间的闰年

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
// 求1000到2000年之间的闰年
	int main()
	{
		int i = 0;
		for (i = 1000; i <= 2000; i++)
		{
			if (i % 4 == 0 && i % 100 != 0)  // 普通闰年
			{
				printf("%d ",i);
			}
			else if (i % 400 == 0)           // 世纪闰年
			{
				printf("%d ",i);
			}
			else
			{
				continue;
			}
		}
		return 0;
	}
```

##  给定两个数，求这个两个数的最大公约数

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

// 求最小公倍数 
// S1 
// 思路：a*i=b*j=m 如果a的倍数能够整除b，且i最小，则m就是最小公倍数 
// S2
// 思路：先求出两个数的最大公约数，然后利用最小公倍数=两数的乘积除以最大公约数

int func1(int a, int b)
{
	int i = 1;
	while (1)
	{
		if (0 == (a * i) % b)
		{
			return a * i;
		}
		i++;
	}
}

int func2(int a, int b)
{
	int sum = a * b;
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	// 求最大公约数
	while (1)
	{
		int c = a % b;
		if (0 != c)
		{
			a = b;
			b = c;
		}
		else
		{
			return sum/b;
		}

	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	// -------------- S1 ----------------------------------
	
	int c1=func1(a, b);
	printf("func1:%d\n", c1);

	// -------------- S2 ----------------------------------
	int c2 = func2(a, b);
	printf("func2:%d\n", c2);
} 
```

## 写一个代码打印1—100之间所有3倍的数字

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
	int main()
	{
		int a = 0;
		for (a = 1; a < 101; a++)
		{
			if (a % 3 == 0) //只有三的倍数，取模才等于0
			{
				printf("%d ", a);
			}
		}


		return 0;
	}

```

##  写代码将三个整数按从小到大输出

```C
#include<stdio.h>
int main() {
	int a = 21;
	int b = 13;
	int c = 61;
	if (a >= b && a >= c)   // 第一种可能，a最大
	{
		printf("%d\t",a);
		if (b >= c)
		{
			printf("%d\t",b);
			printf("%d",c);
		}
		else
		{
			printf("%d\t",c);
			printf("%d",b);
		}
	}
	else if (b >= a && b >= c) // 第二种可能b最大
	{
		printf("%d\t", b);
		if (a >= c)
		{
			printf("%d\t", a);
			printf("%d", c);
		}
		else
		{
			printf("%d\t", c);
			printf("%d", a);
		}
	}
	else  // 第三种可能c最大                       
	{
		printf("%d\t",c);
		if (a >= b)
		{
			printf("%d\t", a);
			printf("%d", b);
		}
		else
		{
			printf("%d", b);
			printf("%d", a);
		}
	}
	return 0;
}

// 第二种解法
if(a<b)
{
    tmp=a;
    a=b;
    b=tmp;
}
if(a<c)
{
    tmp=a;
    a=c;
    c=tmp;
}
if(c<b)
{
    tmp=b;
    c=b;
    b=tmp;
}
// a中存放最大值，c中存放最小值



```

## 冒泡算法

```C
// S1
#define  _CRT_SECURE_NO_WARNINGS	
#include<iostream>
//#include<string>
using namespace std;

void bubblesort(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < len - 1; i++)
	{
        int flag = 1;   
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) // 每次将最大数升到最前面
			{
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
                flag = 0;  
			}
		}
        if(flag == 1) // 如果发现此次循环没有改变flag的值，说明此次冒泡的序列
        {             // 是有序的，那么以后的循环的序列肯定也是有序的
            break;
        }
	}
}

void printArray(int arr[], int len)
{
	int k;
	for (k = 0; k < len; k++)
	{
		cout << arr[k] << endl;
	}
}


int main() {
	
	int arr[10] = { 1,2,3,4,5,6,67,7,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, len);          // 冒泡 
	
	printArray(arr, len);          //  打印数组

	return 0;
}


// S2
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>

// 从低到高
int se_cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

// 从高到低
int in_cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,11,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), se_cmp_int); // qsort 默认是升序
	qsort(arr, sz, sizeof(arr[0]), in_cmp_int);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}




// 利用qsort排序
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>

// 测试排序整型数据
// 从低到高
int se_cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

// 从高到低
int in_cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,11,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), se_cmp_int); // qsort 默认是升序
	qsort(arr, sz, sizeof(arr[0]), in_cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


// 测试排序结构体数据

struct stu
{
	char name[20];
	int age;
};

int cmp_stru_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
	
}
void test2()
{
	struct stu s[] = { {"zhangsan",13},{"lisi",23},{"wangwu",17} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stru_by_name);
	
}

int main()
{
	test1();  // 排序整型数据

	test2();

	return 0;
}






// 模式实现qsort,利用冒泡排序思想
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// 整型数组排序
int cmp_int(const void *e1, const void *e2)
{
	int a = *(int*)e1 - *(int*)e2;
	return a;
}

// 结构体数据排序
struct Stu
{
	char name[20];
	int age;
};

int cmp_str_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_str_by_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}


// 将数据按字节转换
void swap(char *p1, char *p2, int width)
{

	//int* p11 = (int*)p1;
	//int* p22 = (int*)p2;
	//int tmp = 0;
	//tmp = *p11;
	//*p11 = *p22;
	//*p22 = tmp;
	

	for (int k = 0; k < width; k++)
	{
		char tmp = 0;
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void Bubblesort(void* arr, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	char* arr1 = (char*)arr;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if(cmp(arr1 + (j * width), arr1 + (j + 1) * width) > 0)
			{
				swap(arr1 + (j * width), arr1 + (j + 1) * width, width);
			}

		}
	}
}


int main()
{

	//int arr[] = {9,8,22,7,563,5,11,4,3,2,1};
	struct Stu arr[] = { {"zhangsan",56},{"lisi",72},{"wangwu",14},{"sae",1}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	

	//Bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	Bubblesort(arr, sz, sizeof(arr[0]), cmp_str_by_name);
	Bubblesort(arr, sz, sizeof(arr[0]), cmp_str_by_age);

	for (int i = 0; i < sz; i++)
	{
		//printf("%s ", (arr[i]).name);
		printf( "%d ", (arr[i]).age);
	}

	return 0;
}
```

## 将浮点数转换为整数类型，要求四舍五入

```C
#include<stdio.h>
//将浮点数转换为整数类型，要求四舍五入 
int main()
{
    double a;
    scanf("%lf",&a);
    if (a>0) // 如果是正数，加0.5，然后强制转int
    {
        printf("%d",(int)(a+0.5));
    }
    else //  如果是负数，加0.5，然后强制转int
    {
         printf("%d",(int)(a-0.5));        
    }
    return 0;
}
```

## 注意下面的输入

```C
#include<stdio.h>
int main()
{
    int a=0;
    float b=0.0;  // float初始化时，应该是浮点数
    float c=0.0;
    float d=0.0;
    
    scanf("%d;%f,%f,%f",&a,&b,&c,&d);   // 带有标点符号，怎么输入的我还不了解
    printf("The each student score of No. %d is %.2f, %.2f, %.2f.",a,b,c,d);
    
    return 0;
}
```

## 输出出生年月日

```C
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    
    scanf("%4d%2d%2d",&a,&b,&c);
    printf("year=%d\nmonth=%02d\ndate=%02d",a,b,c); //不够两位默认填0
    
    return 0;
}
```

```C
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int tmp=0;

    scanf("a=%d,b=%d",&a,&b);  // 输入要求a=%d这样的格式
    
    tmp=b; //交换
    b=a;
    a=tmp;
     
    printf("a=%d,b=%d",a,b);

    return 0;
}
```

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



## 求输入数组的最大值

```C
#define  _CRT_SECURE_NO_WARNINGS	

#include<stdio.h>
int main() {
    int a, i;
    int max = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d", &a);
        if (a >= max) {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}
```

## 计算阶乘之和

```C
// 计算1！+2！+3！+...+n！
int main()
{
    int ret = 1;
    int sum = 0;
    int n = 0;

    for (n=1;n<=3;n++)
    {
        ret = ret *n;            // 3!=2!+1 n!=(n-1)!
        sum = sum + ret;
    }

    printf("%d",sum );
    return 0;
}
```

##  在数组中，查找某个数字

```C
// 折半查找法 一定得是有序数组，从大到小排列或从小到大排列
int main()
{
    int left = 0;
    int right = 9;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

        while (left <= right)
        {
           // int mid = (left + right) / 2;
            int mid =left+(right-left)/2; 上面那种方式有溢出的风险

                if (arr[mid] < 7)
                {
                    left = arr[mid + 1];
                }
                else if (arr[mid] > 7)
                {
                    right = arr[mid - 1];
                }
                else
                {
                    printf("找到了 ，下标为%d\n", mid);
                    break;
                }
        }
        if (left > arrright)
        {
            printf("没找到");
        }

}
    

```

## 编写代码，演示多个字符从两端移动，向中间汇聚

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<Windows.h> // 引用Sleep函数
#include<stdlib.h>// 引用system函数
// 编写代码，演示多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] =  "welcome to Bit!!!!" ;
	char arr2[] =  "##################" ;
	int L = 0;// 数组最左边的下标
	int R = sizeof(arr1) / sizeof(arr1[0])-2;
	int mid = (L + R) / 2;

	//for (;L<=mid+3,R>=mid;L++,R--) // for循环 里面只要有一个判断条件不满足，就结束循环

		while(L<=R)                 // while循环
	{
		arr2[L] = arr1[L];
		arr2[R] = arr1[R];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls"); // system是一个库函数，可以执行系统命令
		L++; R--;
	}

	return 0;
}
```



## 猜数字游戏

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<Windows.h> // 调用Sleep函数
#include<stdlib.h>// 调用system函数 引用srand
#include<time.h> // 调用time
// 猜数字
void menu()
{
	printf("***********************\n");
	printf("*****  1.play  ********\n");
	printf("*****  0.exit  ********\n");
	printf("***********************\n");
}
void game()
{
  // 1.生成随机数
	int guess = 0;
	int ret = rand()%100+1; // 生成0~100之间的函数 任何正整数模100产生数的范围都是在0~99之间
	//printf("%d\n",ret);
  // 2.猜数字
	printf("请猜数字\n");
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL)); // 设置一次就可以了

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			printf("猜数字开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}

	} while(input);


	return 0;
}
```



```C
/*
此题考查取值范围和格式化输入与输出：
有以下几点要注意：
1.输入时”ld“与”lf“分别用于输入长整型与doulbe型数据
2.输出时”l“用于输出长整型，可以用在格式符d、u、o、x前面
3.浮点数（实型数）可以用十进制形式和指数形式来表示，本例用的是后者
*/
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%ld",(long long)3.156e7*a);  // 注意指数形式是浮点数，这里强转称long
}                                        // long数据类型
```




## 发金币

> ![image-20220425173625199](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202204251736337.png)
>
> ```C
> // 第一种解法
> #include<stdio.h>
> int main()
> {
>     int i=0;
>     int k=0;
>     int sum=0;
>     int all=0;
>     
>     scanf("%d",&k);
>     
>     for(i=1;;i++)
>     {
>         sum=sum+i;
>         if (k>sum)
>         {
>             all=all+i*i;
>         }
>         else if (k<sum)
>         {
>             all=(all+i*i)-(sum-k)*i;
>             printf("%d",all);
>             break;
>         }
>         else
>         {
>            all=all+i*i;
>            printf("%d",all);
>             break;
>         }
>         
>     }
>     
>     
>     return 0;
> }
> 
> 
> // 第二种解法
> 
> ```
>
> 

## 打印一个数的二进制的偶数位和奇数位

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
// 打印一个数中二进制的奇数位和偶数位
int main()
{
    // 第一种解法：让a移动，优点是可以直接判断是0或者1
    int a = 12;
    
    // 从右到左打印
    // 打印奇数位
    printf("奇数位：");
    for (int i = 0;i<32; i+=2)
    {
        printf("%d ", (a >> i) & 1);
        
    }

    // 打印偶数位
    printf("偶数位：");
    for (int i = 1; i < 32; i += 2)
    {
        

        printf("%d ", (a >> i) & 1);
    }
 

    // 第一种解法：让1移动，缺点是不可以直接判断是0或者1，只能判断是0或着不等于0。
    // 显然第二种办法更好，直接得出变量的二进制位
    int a = 0;
    int b = 0;


    scanf("%d", &a);

    // 打印奇数位，从后往前打印
    printf("奇数位（从前到后排列）：");
    for (int i = 0; i < 16; i += 2)
    {
        b = a & (1 << i);
        if (b != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
```

## 计算1！+2！+……+n!

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
// 计算1！+2！+……+n!
int main()
{
	int sum = 0;
	for (int i = 1; i <n ; i++)
	{
        int ret = 1; // ret只在这个函数体用到，那就在这里定义
		for (int j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}

	
	printf("%d", sum);
 	return 0;
}  
```

## 模拟实现strcopy

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include <assert.h>
#include <stdio.h>

void m_strcopy(char* s1, const char* s2) // const防止所修饰的变量在函数中被修改
{
    assert((s1 != NULL) && (s2 != NULL));// 断言.当括号里的条件为假时,会打印出错的                                             行,且中止程序
    while (*s1++ = *s2++) // 利用指针,改变s1字串的值
    {
        ;
    }
}

int main()
{

    char s1[] = "XXXXXXXXXXXXXXXX";
    char s2[10] = "songguan";

    m_strcopy(s1, s2);
    printf("%s\n", s1);

    return 0;
}
```

## 喝汽水问题：一瓶汽水1元，2个空瓶可以换一瓶空瓶，20元可以喝多少汽水
```C
#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
// 喝汽水问题：一瓶汽水1元，2个空瓶可以换一瓶空瓶，20元可以喝多少汽水
// 思路：喝完所有汽水后再换瓶子
int main()
{
    int money = 0;
    scanf("%d", &money);

    int total = money;       // 总共喝的瓶数
    int empty = money;       // 每次喝完汽水后，有多少个瓶子
   


   
    while (empty>=2)
    {
        total += empty/2;   // 每次换的汽水加上之前换的汽水
        empty = empty / 2 + empty % 2; // 每次喝完汽水后剩的空瓶加上一次换汽水剩下的瓶子

    }
    printf("%d\n", total);
    return 0;
}
```

## 打印菱形

![image-20220519210954541](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202205192109680.png)

```C
S1:
#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
// 打印菱形
// 思路：把菱形分成上下两个部分，且上半部分比下半部分多一行
// 注意：这种思路是没有把菱形看成一个矩形来操作，是空格输出完
//       紧接着输出星号
int main()
{
    int n = 0; // 输出图形的行数
    scanf("%d", &n);
 // ------------ 上半部分 -------------------   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < ((2*i) + 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
 // ------------ 下半部分 ---------------------   
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * (n-1-i) - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;  
}
// s2:把菱形当作一个n*n的矩形来处理
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 5;


    char arr[13][13] = { 0 };


    for (int i = 0; i < 13; i++)
    {
        if (i < 7)
        {
            for (int j = 0; j < 13; j++)
            {


                if (j >= (6 - a) && j <= (6 + a))
                {
                    arr[i][j] = '*';
                    printf("%c", arr[i][j]);
                }
                else
                {
                    arr[i][j] = ' ';
                    printf("%c", arr[i][j]);
                }
            }
            printf("\n");
            a++;
            if (7 == a)
            {
                a = 5;
            }
        }
        else
        {
            for (int j = 0; j < 13; j++)
            {
                if (j >= (6 - a) && j <= (6 + a))
                {
                    arr[i][j] = '*';
                    printf("%c", arr[i][j]);
                }
                else
                {
                    arr[i][j] = ' ';
                    printf("%c", arr[i][j]);
                }
            }
            printf("\n");
            a--;
        }
    }
    return 0;
}
```

## 求出0～100000之间的所有“水仙花数”并输出。

```C 
// “水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋//  //  3^3，则153是一个“水仙花数”。
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<math.h>
// 求0~10000的水仙花数
int main()
{

    printf("水仙花数:");

    for (int i = 0; i <= 10000; i++)
    {
        int n = 1;  // 变量是哪个语句体用，尽量就在哪个语句体中定义，不然很容易忘记还原
        int tmp = 0;
        int sum = 0;
        tmp = i;
        while (tmp / 10)  // 求出n是多少位数
        {
            n++;
            tmp /= 10;
        }

        tmp = i;
        while (tmp)
        {
            sum += pow(tmp % 10, n); // 会有精度的丢失，在这里无所谓，因为括号里                                      // 算出的
            tmp /= 10;               // 是整数，整数的双精度浮点数再转换为整型是                                      // 不影响结果的  
         }

        if (sum == i)
        {
            printf("%d ", i);
        }
 
    }
    return 0;
}
```

## 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

```C
// S1 
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<math.h>
// 计算求和
int main()
{

    int a = 0; // a为单个数字
    int n = 0; // 项数
    int k = 0; // 用来在循环求各项
    int sum = 0; // 表达式的和
    scanf("%d%d", &a, &n);
    
    for (int i = 0; i < n; i++)
    {
        k = k * 10 + a;  // 每一项等于前一项*10加a
        sum += k;
    }
    printf("%d\n", sum);
    return 0;
}
// S2 用指针
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
    int a = 2;
    int* p = &a;
    int num = 0;
    int sum = 0;


    for (int i = 1; i<=10*10*10*10; i*=10)
    {
        num=num+(*p)*i;
        sum = sum + num;
    }
    printf("%d", sum);


    return 0;
}
```

## 将一句话中的单词逆序（标点符号也算单词）

![image-20220522084112806](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202205220841872.png)

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>

// 思路：先将其全部逆序，然后分别对其中的单词逆序

void reverse(char* L, char* R)
{
	// 创建变量

	char tmp = 0;

	// 逆序 

	while (R > L)
	{
		tmp = *L;
		*L = *R;
		*R = tmp;
		L++;
		R--;
	}
}

int main()
{

	// 创建变量

	char arr[100] = { 0 };
	gets(arr);
	char* L = arr;
	char* R = arr + (strlen( arr ) -1); 

	// 创建逆序的函数，并调用且逆序整句话

	reverse(L,R);
	//printf("%s\n", arr);

	// 逆序其中各个单词

	char* start = arr;
	
	while (0 != *start)
	{
		char* end = start;
		while (' ' != *end && '\0' != *end)
		{
			end++;
		}
		reverse(start,end-1);
		if (0 == *end) // 如果end指向末尾，start就直接指向\0。字符串
		{              // 末尾的标志就是\0
			start = end;
		}
		else
		{
			start = end + 1;
		}
	}
	printf("%s\n", arr);

	return 0;

}
```

##  找奇数

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>

//  func1：如果有一个数组，有一个数的种类是奇数个，其他数的种类都是偶数个，求这个奇数个数种类的数
//  func2：如果有一个数组，有两个数的种类是奇数个，其他数的种类都是偶数个，求这两个奇数个数种类的数

void func1(int* arr,int n)
{
	int eor = 0;
	for (int i = 0; i < n; i++)
	{
		eor ^= arr[i];
	}
	printf("%d\n", eor);
}

void func2(int* arr, int n)
{
	int eor = 0;
	for (int i = 0; i < n; i++)
	{
		eor ^= arr[i];
	}
	int R = eor & (~eor + 1); // 取出两个奇数个数最右边第一个相反的位置

	int eorr = 0;
	for (int i = 0; i < n; i++)
	{
		int rr = arr[i];
		if((R & arr[i]) == 0)
		{
			eorr ^= arr[i];
		}
	}
	printf("%d %d", eorr, (eor ^ eorr));

}

int main()
{
	int arr1[] = { 1,2,3,3,1,2,3};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);

	//func1(arr1,n1);

	int arr2[] = {1,2,3,3,1,2,3,5};
	int n = sizeof(arr2) / sizeof(arr2[0]);

	func2(arr2, n);


	return 0;

}
// 总结
// 1.异或相当于无进位相加
// 2.a & (~a + 1)可以求出a最右边开始数第一个位为1的位置
// 3.异或具有交换律和结合律
```

## 比赛名次

![image-20220524081335413](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202205240813493.png)

```C
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

// S1
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++)
		{
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && 
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) && 
							((e == 4) + (a == 1) == 1))
						{
							if ((a * b * c * d * e) == 120)
							{
								printf("a=%d  b=%d  c=%d  d=%d  e=%d\n", a, b, c, d, e);

							}
						}
					}
				}
			}
		}
	}

	return 0;
}

// 首先条件是用来干什么的，条件是用来筛选的，在计算机语言中，条件筛选只能筛出条件表达式为真的情况
// 第一个条件为b为第二，a为第三且有且仅有一半是对的，那么计算机语言就是(b==2) + (a==3) ==1,找出符合这个条件的可能名次，如 // 
// 果条件改成b为第二,a为第三，且至少有一个是对的，那么表达式应该是(b==2)|| (a==3)
```

## 猜凶手

```C
// S1
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	

	for (int a = 0; a <= 1; a++) // 1为凶手，0不是
	{
		for (int b = 0; b <= 1; b++)
		{
			for (int c = 0; c <= 1; c++)
			{
				for (int d = 0; d <= 1; d++)
				{
					if (((!a) + c + d + (!d)) == 3)
					{
						if ((a + b + c + d) == 1)
						{
							if (a == 1)
							{
								printf("A是凶手\n");
							}
							else if (b == 1)
							{
								printf("B是凶手\n");
							}
							else if (c == 1)
							{
								printf("C是凶手\n");
							}
							else
							{
								printf("D是凶手\n");
							}
						}
					}	
				}
			}
		}
	}

	return 0;
}
// S2
#include <stdio.h>
char findkiller(){
 char killer = 'a';
 for (;killer<= 'd';killer++){
  if(((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d'))==3){
   printf("found you!: %c\n",killer);
  }
 }
}
int main()
{
 findkiller();
 return 0;
}
```

## 有序序列的合并

![image-20220525220649462](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202205252206541.png)

```C
// 思路：将下标i指向第一个数组的第一个元素与下边j指向第二个数组的第二个元素相比，小的元素，赋给新的数组，且个下标指向的元素小，哪个下标加1，一次比较下去
// 
#include<stdio.h>
#include<string.h>

int main()
{
    int n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int i = 0;
    int j = 0;
    int r = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[r] = arr1[i];
            printf("%d ", arr3[r]);
            r++;
            i++;

        }
        else
        {
            arr3[r] = arr2[j];
            printf("%d ", arr3[r]);
            r++;
            j++;
        }
    }
    int ii = m - i;
    int jj = n - j;
    if (i < m)
    {
        for(int k = 0; k < ii; k++)
        {
            arr3[r] = arr1[i];
            printf("%d ", arr3[r]);
            r++;
            i++;
        }

    }
    else 
    {
        for(int k = 0; k < jj; k++)
        {
            arr3[r] = arr2[j];
            printf("%d ", arr3[r]);
            r++;
            j++;
        }

    }

    return 0;
}

```

```C
// 一.求某个数组第i个位置到j个位置的累加和
    int func4(int l, int r) {
	int arr[] = { 1,2,3,4,5 };
	int num[10] = { 0 }; // arr数组从第0个位置开始，分别到0位置的累加和
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	num[0] = arr[0];
	for (int i = 1; i < sz; i++){
		num[i] = arr[i] + num[i - 1];  // 从0位置到i位置的累加和等于i位置的元素，加上从0位置
	}                                  // 到i-1位置的累加和

	if (0 == l) {
		return num[r];                 // 从l位置到r位置的累加和 == 从0位置到r位置的累加和减去 
	}                                  // 从0位置到（l-1）位置的累加和，如果l等于0，那么就等于
	else                               // 从0到r位置的累加和，因为num数组就是从0位置到各个位置
		return num[r] - num[l - 1];    // 的累加和
	
}

// 总结
// 1. 求累加和次数不多时，将各个位置到0位置的累加和做成一个一位数组，可以用这种方法求；
//    但如果求累加和次数多时，可以考虑将从任意开始到一个位置到另一个位置的累加和（后面的位置要大于前面的位置）
//    做成一个二维数组，用到累加和，直接查表就可以了
// 2. 虽然二维数组占的空间大，可是查询次数频繁时，就可以节约空间，这种就是空间换时间，一维数组的方法就是用时间换空间
```

