// 계산기

#include <stdio.h>
int main(void)
{
	int a, b = 0;
	char sign = "NULL";
	scanf_s("%d %c %d", &a, &sign, 4, &b);
	switch (sign) {
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		printf("%.2f", (float)a / (float)b);
		break;
	default:
		printf("잘못된 형식입니다.");
	}
}