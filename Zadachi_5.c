# include <stdio.h>

int main() {
	//Задача 1
	//int num;
	//printf("Enter a number: ");
	//scanf("%d", &num);
	
	//if(num % 2 == 0){
	//	printf("%d - even number \n", num);
	//} else {
	//	printf("%d - non even number \n", num);
	//}	
	
	//Задача 2
	//int num1;
	//int num2;
	
	//printf("Enter the number 1: \n");
	//scanf("%d", &num1);
	
	//printf("Enter the number 2: \n");
	//scanf("%d", &num2);
	
	//if(num1 > num2) {
	//	printf("%d \n", num2);
	//} else if(num1 > num2) {
	//	printf("%d \n", num1);
	//} else if(num1 < num2) {
	//	printf("%d \n", num2);
	//} else if(num1 < num2) {
	//	printf("%d \n", num1);
	//} 
	
	//Задача 3
	//int num;
	//printf("Enter the number: ");
	//scanf("%d", &num);
	
	//if(num == 0) {
	//	printf("zero");
	//} else if(num > 0) {
	//	printf("plus");
	//} else if(num < 0) {
	//	printf("negative");
	//}
	
	//Задача 4
	//int year;
	//int century;
	//printf("Enter year: ");
	//scanf("%d", &year);
    
	//century = (year - 1) / 100 + 1;
	
	//if(year != 0) {
	//	printf("%d \n", century);
	//}
	
	//Задача 5
	int num1, num2;
	int res1;
	int res2;
	int res3;
	int res4;
	char sym;
	
	printf("Enter number 1: \n");
	scanf("%d", &num1);
	
	printf("Enter number 2: \n");
	scanf("%d", &num2);
	
	printf("Enter operation(+, -, *, /): ");
	scanf(" %c", &sym);
	
	res1 = num1 * num2;
	res2 = num1 / num2;
	res3 = num1 + num2;
	res4 = num1 - num2;
	
	if(sym == '+') {
		printf("%d", res3);
	}
	else if(sym == '-') {
		printf("%d", res4);
	}
	else if(sym == '*') {
		printf("%d", res1);
	}
	else if(sym == '/') {
		if(num2 != 0) {
			printf("%d", res2);
		} else {
			printf("Error: division by zero! \n");
		}	
	}
    else {
		printf("There is no solution \n");
	}	
	
	return 0;
}