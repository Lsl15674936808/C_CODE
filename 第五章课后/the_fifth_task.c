#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M_PER_H 60
#define FET_TO_CM 30.48
#define ICH_TO_CM 2.54
double cubic(double n);
int temperatures(double fahrenheit);
int main()
{
	//练习一：分钟换小时分钟
	printf("练习一：分钟换小时分钟\n");
	int t,min, h;
	printf("请输入花费的时间（分钟）：");
	scanf("%d", &t);
	while (t > 0) {
		h = t / M_PER_H;
		min = t % M_PER_H;
		printf("一共花费%d小时%d分\n", h, min);
		printf("请输入花费的时间（分钟）：");
		scanf("%d", &t);

	}
	//练习二打印比输入数字大10 的数之间的所有整数
	printf("练习二：打印比输入数字大10 的数之间的所有整数\n");
	int num1, num2;
	printf("请输入一个数字：");
	scanf("%d", &num1);
	num2 = num1 + 10;
	while (num1 <= num2) {
		printf("%d ", num1++);
	}
	//练习3：将天数转换成几周几天的形式
	printf("\n练习3：将天数转换成几周几天的形式\n");
	int dnums, weeks, days;
	const int DAY_PER_WEEK = 7;
	printf("Please enter the number of days:");
	scanf("%d", &dnums);

	while (dnums > 0) {
		weeks = dnums / DAY_PER_WEEK;
		days = dnums % DAY_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n", dnums, weeks, days);
	
		printf("Please enter the number of days:");
		scanf("%d", &dnums);
	}
	printf("DONE!\n");

	//练习4输入身高cm输出**feet，**inches
	printf("练习4输入身高cm输出feet，inches\n");
	float high, inch;
	int feet;

	printf("Enter a height in centimeters: ");
	scanf("%f", &high);

	while (high > 0) {
		(int)feet = (int)high / (int)FET_TO_CM;
		inch = (high - feet * FET_TO_CM) / ICH_TO_CM;
		printf("%.1f cm = %d feet, %.1f inches\n", high, feet, inch);
		printf("Enter a height in centimeters (<= 0 to quit): ");
		scanf("%f", &high);
	}
	printf("bye\n");
	//练习五用户输入天数内赚的钱
	printf("\n练习五用户输入天数内赚的钱\n");
	int count1, sum1;
	sum1 = 0;
	printf("Enter the number of days you work: ");
	scanf("%d", &count1);
	while (count1 > 0) {
		sum1 = sum1 + count1--;
	}
	printf("you earned $ %d total.\n", sum1);
	printf("Exit!\n");
	//练习六计算平方和
	printf("\n\n练习六计算平方和\n");
	int count2, sum2;
	sum2 = 0;
	printf("Enter the number of days you work: ");
	scanf("%d", &count2);
	while (count2 > 0) {
		sum2 = sum2 + count2 * count2;
		count2--;
	}
	printf("You earned $ %d\n", sum2);
	printf("EXIT!\n\n");
	//练习七建立函数计算立方值并返还
	printf("练习七建立函数计算立方值并返还\n");
	double cube;

	printf("Please enter a number: ");
	scanf("%lf", &cube);
	cubic(cube);
	printf("EXIT!!\n");

	//练习八
	printf("练习八\n");
	long integer1, integer2, mod;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%ld", &integer1);
	printf("Enter an integer to serve as the first operanf: ");
	scanf("%ld", &integer2);
	while (integer1 > 0 && integer2 > 0) {
		mod = integer2 % integer1;
		printf("%ld %% %ld is %ld/n", integer2, integer1, mod);

		printf("Enter an integer to serve as the first operanf (<=0 quit): ");
		scanf("%ld", &integer2);
	}
	printf("DONE!\n\n\n");
  
    //练习九
    double th;

	printf("Enter a fahrenheit to start: ");
	
	while (scanf("%lf", &th) == 1) {
		temperatures(th);
		printf("Enter a fahrenheit to start(q to quit): ");
	}
	printf("就是这样");
	return 0;

}
double cubic(double n)
{
	 double c = n * n * n;
	printf("%lf立方值是：%lf\n", n, c);
	return c;
}
int temperatures(double fahrenheit)
{
	const double F_TO_C = 32.0;
	const double C_TO_K = 273.16;
	double celsius, kelvin;
	celsius = 5.0 / 9.0 * (fahrenheit - FET_TO_CM);
	kelvin = celsius + C_TO_K;
	
	printf("%.2f fahrenheit, equal %.2f celsius, equal %.2f kelvin.\n", fahrenheit, celsius, kelvin);
	return 0;
}