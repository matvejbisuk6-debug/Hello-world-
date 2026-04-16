# include <stdio.h>

int main() {
	//Задача 1
	//int num1, num2;
	//int temp1, temp2;
	//int count = 0;
	
	//printf("Enter number: \n");
	//scanf("%d %d", &num1, &num2);
	
	//temp1 = num1;
	//temp2 = num2;
	
	//for(int i = temp1; i <= temp2; i++) {
	//	count += i;
	//}
	//printf("Total sum of numbers %d and %d = %d \n", num1, num2, count);
	
	//Задача 2
	//int n;
	
	//printf("Enter number: \n");
	//scanf("%d", &n);
	
	//for(int i = 1; i<= 10; i++) {
	//	int res = n * i;
	//	printf("%d * %d = %d \n", n, i, res);
	//}
	
	//Задача 3
	//int n;
	
	//printf("Enter number: \n");
	//scanf("%d", &n);
	
	//for(int i = 1; i <= n; i++) {
	//	int two = i * i;
	//	printf("%d^%d = %d \n", i, i, two);
	//}
	
	//Задача 4
	//int n;
	//int counter = 0;
	
	//printf("Enter of number: \n");
	//scanf("%d", &n);
	
	//for(int i = 2; i <= n; i++) {
	//	if(i % 2 == 0) {
	//		counter++;
	//		printf("%d - the number of even numbers \n", counter);
	//	}
	//}
	
	//Задача 5
	//int n;
	//int plus = 0;
	
	//printf("Enter of number: \n");
	//scanf("%d", &n);
	
	//for(int i = 2; i <= n; i++) {
	//	if(i % 2 == 0) {
	//		plus += i;
	//		printf("%d \n", plus);
	//	}
	//}
	
	//Задача 6
	int a = 5;
	
	for(int i = 0; a > i; i++) {
		for(int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}