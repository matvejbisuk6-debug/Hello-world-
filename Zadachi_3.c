# include <stdio.h>

int main(){
	
	//Повторение
	//Задача 1
	//int length = 10;
	//int width = 5;
	//int perimeter;
	//int square;
	
	//perimeter = 2 * (length + width);
	//square = length * width;
	
	//printf("Square: %d * %d = %d \n", length, width, square);
	//printf("Perimeter: 2 * (%d + %d) = %d \n", length, width, perimeter);
	
	//Задача 2
	//int a = 5;
	//int b = 2;
	//int c;
	
	//c = a / b;
	//printf("%d / %d = %d", a, b, c);
	
	//double a1 = 5.0;
	//double b1 = 2.0;
	//double c1;
	
	//c1 = a1 / b1;
	//printf("%f / %f = %f", a1, b1, c1);
	
	//Задача 3
	//char ch;
	//printf("Add Symbol:");
	//scanf("%c", &ch);
	
	//printf("You have entered a character: %с \n", ch);
	//printf("Its ASCII is: %d \n", ch);
	
	//Задача 4
	//int x = 2000000000;
	//int y;
	
	//y = 2 * x;
	//printf("%d * 2 = %d", x, y);
	
	//long long x1 = 2000000000;
	//long long y1;
	
	//y1 = 2 * x1;
	//printf("%lld * 2 = %lld", x1, y1);
	
	//Задача 5
	//double  a = 10.0;
	//double b = 20.0;
	//double c = 30.0;
	//double d;
	
	//printf("(%f + %f + %f) / 3.0 = %f \n", a, b, c, d);
	
	//Задача 6
	int sec;
	int hour;
	int min;
	int rem_min;
	int sec1;
	printf("Enter time: \n");
	scanf("%d", &sec);
	
	hour = sec / 3600;
	rem_min = (sec % 3600) / 60;
	sec1 = sec % 60;
	
	printf("Time: %d h %d min %d sec\n", hour, rem_min, sec1);
	
	return 0;
}