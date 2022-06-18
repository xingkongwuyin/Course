#include<stdbool.h>
#include <limits.h>    //整型数的最大最小值定义在该文件下
#include <float.h>     //浮点数数的最大最小值定义在该文件下
// 1.add
int add(int a, int b) {
	int sum = a;
	while (b != 0) {
		sum = a ^ b;
		b = (a & b) << 1;
		a = sum;
	}
	return sum;
}

// 2.minus
int minus(int a, int b) {
	return add(a, add(~b, 1));
}

// 3.multi
int multi(int a, int b) {
	int ans = 0;
	while (b != 0) {
		/*if ((b & 1) == 1) 
		{
			ans = add(ans,a);
		}*/
		if ((b & 1) == 1) {
			ans = add(ans, a);
		}
		a <<= 1;
		((unsigned int)b) >>= 1;
	}
	return ans;
}

// 4.1 isNeg
bool isNeg(int n) {
	return n < 0;
}

// 4.2 negNum
int negNum(int n){
	return add(~n, 1);
}

// 4.3 div
int div(int a, int b) {
	int x = isNeg(a) ? negNum(a) : a;
	int y = isNeg(b) ? negNum(b) : b;
	int res = 0;
	for (int i = 30; i >= 0; i--) {
		if ((x >> i) >= y) {
			res |= (1 << i);
			x = minus(x, y << i);
		}
	}
	return isNeg(a) ^ isNeg(b) ? negNum(res) : res;
}

// 4. divid
int divid(int a, int b) {
	if (a == INT_MIN && b == INT_MIN) {
		return 1;
	}
	else if(b == INT_MIN) {
		return 0;
	}
	else if (a == INT_MIN) {
		if (b == -1) {
			return INT_MAX;
		}
		else {
			int x = div(a + 1, b);
			int y = a - x;
			int z = div(y, b);
			return add(x, z);
		}
	}
	else {
		return div(a, b);
	}
}

int A(int n) {
	return n;
}