#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M_PER_H 60
#define FET_TO_CM 30.48
#define ICH_TO_CM 2.54
double cubic(double n);
int temperatures(double fahrenheit);
int main()
{
	//��ϰһ�����ӻ�Сʱ����
	printf("��ϰһ�����ӻ�Сʱ����\n");
	int t,min, h;
	printf("�����뻨�ѵ�ʱ�䣨���ӣ���");
	scanf("%d", &t);
	while (t > 0) {
		h = t / M_PER_H;
		min = t % M_PER_H;
		printf("һ������%dСʱ%d��\n", h, min);
		printf("�����뻨�ѵ�ʱ�䣨���ӣ���");
		scanf("%d", &t);

	}
	//��ϰ����ӡ���������ִ�10 ����֮�����������
	printf("��ϰ������ӡ���������ִ�10 ����֮�����������\n");
	int num1, num2;
	printf("������һ�����֣�");
	scanf("%d", &num1);
	num2 = num1 + 10;
	while (num1 <= num2) {
		printf("%d ", num1++);
	}
	//��ϰ3��������ת���ɼ��ܼ������ʽ
	printf("\n��ϰ3��������ת���ɼ��ܼ������ʽ\n");
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

	//��ϰ4�������cm���**feet��**inches
	printf("��ϰ4�������cm���feet��inches\n");
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
	//��ϰ���û�����������׬��Ǯ
	printf("\n��ϰ���û�����������׬��Ǯ\n");
	int count1, sum1;
	sum1 = 0;
	printf("Enter the number of days you work: ");
	scanf("%d", &count1);
	while (count1 > 0) {
		sum1 = sum1 + count1--;
	}
	printf("you earned $ %d total.\n", sum1);
	printf("Exit!\n");
	//��ϰ������ƽ����
	printf("\n\n��ϰ������ƽ����\n");
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
	//��ϰ�߽���������������ֵ������
	printf("��ϰ�߽���������������ֵ������\n");
	double cube;

	printf("Please enter a number: ");
	scanf("%lf", &cube);
	cubic(cube);
	printf("EXIT!!\n");

	//��ϰ��
	printf("��ϰ��\n");
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
  
    //��ϰ��
    double th;

	printf("Enter a fahrenheit to start: ");
	
	while (scanf("%lf", &th) == 1) {
		temperatures(th);
		printf("Enter a fahrenheit to start(q to quit): ");
	}
	printf("��������");
	return 0;

}
double cubic(double n)
{
	 double c = n * n * n;
	printf("%lf����ֵ�ǣ�%lf\n", n, c);
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