//#include <stdio.h>
//
//int main() {
//	// 비교 연산자
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 100;
//	int a = 10;
//	int b = 20;
//
//	if (num1 == 10) printf("num1은 10이다 \n\n");					// 참임으로 ** 출력
//
//	if (num1 == 20) printf("num1은 20이다 \n");						// 참이 아니므로 출력되지 않음
//	else if (num1 != 20) printf("num1 은 20이 아니다 \n\n");		// 참임으로 ** 출력
//
//	if (num2 > num1) printf("num2가 더 크다 \n");					// 참이으로 ** 출력
//	if (num1 < num2) printf("num1가 더 작다 \n\n");					// 참이으로 ** 출력
//
//	if (num1 >= a) printf("num1은 a와 같거나 크다 \n");				// 참이으로 ** 출력
//	if (num2 <= b) printf("num2은 b와 같거나 작다 \n");				// 참이으로 ** 출력
//}

//#include <stdio.h>
//
//int main() {
//	// 삼항 연산자
//	int num1 = 5;
//	int num2, num3, num4;
//
//	// 1번 표기 방법
//	if (num1)			// num1이 참이면
//		num2 = 100;		// num2에 100을 할당
//	else				// num1가 거짓이면
//		num2 = 200;		// num2에 200을 할당
//
//	printf("%d \n\n", num2);		// num1이 5이므로 참. num2에 100을 할당하게 됨
//
//	// 2번 표기 방법
//	num3 = num1 ? 100 : 200;		// num1이 참이면 num3에 100을 할당, 거짓이면 num2에 200을 할당
//	num4 = num1 == 10 ? 100 : 200;	// num1이 10이면 num4에 100을 할당, 거짓이면 num2에 200을 할당
//
//	printf("%d \n", num3);			// num1이 5이므로 참. num3에 100을 할당하게 됨
//	printf("%d \n", num4);			// num1이 5이므로 거짓. num4에 200을 할당하게 됨
//}