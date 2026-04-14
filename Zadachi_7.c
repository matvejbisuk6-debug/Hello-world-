# include <stdio.h>

int main() {
	//Задача 1
	//int a;
	//int b;
	
	//printf("Enter number1: \n");
	//scanf("%d", &a);
	
	//printf("Enter number2: \n");
	//scanf("%d", &b);
	
	//for(int i = a; i <= b; i++) {
	//	printf("%d \n", i);
	//}
	
	//Задача 2
	//int n;
	//int sum = 0;
	
	//printf("Enter natural number \n");
	//scanf("%d", &n);
	
	//for(int i = 1; i <= n; i++) {
	//	sum += i;
	//}
	
	//printf("Sum from 1 to %d = %d \n", n, sum);
	
	//Задача 3
	//int n;
	
	//printf("Enter natural number: \n");
	//scanf("%d", &n);
	
	//for(int i = 2; i <= n; i++) {
	//	if(i % 2 == 0) {
	//	printf("%d \n", i);
	//	}
	//}
	
	//Задача 4
	//int n;
	//long fact = 1;
	
	//printf("Enter natural number 0 to 10: \n");
	//scanf("%d", &n);
	
	//for(int i = 1; i <= n; i++) {
	//	fact *= i;
	//}
	//printf(" factorial %d = %llu \n", n, fact);
	
	//Задача 5
	//int k;
	//int res;
	
	//printf("Enter number \n");
	//scanf("%d", &k);
	
	//for(int i = 1;i < 11; i++) {
	//	res = k * i;
	//	printf("%d * %d = %d \n", k, i, res);
	//}
	
	//Задача 6
	//int n;
	//int temp;
	//int count = 0;
	
	//printf("Enter an integer \n");
	//scanf("%d", &n);
	
	//temp = n;
	
	//while(temp > 0) {
	//		temp /= 10;
	//		count++;
	//}
	//printf("In the number %d - %d numbers", n, count);
	
	//Задача 7
	//int num;
	//int temp;
	//int sum = 0;
	
	//printf("Enter number: \n");
	//scanf("%d", &num);
	
	//temp = num;
	
	//while(temp > 0) {
	//	int digit = temp % 10;
	//	temp /= 10;
	//	sum += digit;
	//}
	//printf("%d - Original number \n", num);
	//printf("%d - Sum of the numbers \n", sum);
	
	//Задача 8
	//int n;
	//int temp;
	//int power;
	
	//printf("Enter number: \n");
	//scanf("%d", &n);
	
	//temp = n;
	
	//while(temp > 1) {
	//	if(temp % 2 != 0) {
	//		printf("%d - not a power of two \n");
	//		return 0;
	//	}
	//	temp /= 2;
	//	power++;
	//}
	//printf("%d - It's 2 in power %d \n", n, power);
	
	//Задача 10
	int n;
	int temp;
	int rev = 0;
	
	printf("Enter number: \n");
	scanf("%d", &n);
	
	temp = n;
	
	while(temp > 0) {
		int rem = temp % 10;
		rev = (rev * 10) + rem;
		temp = temp / 10;
	}
	printf("%d - Original number \n", n);
	printf("%d - New number \n", rev);
	
	return 0;
}