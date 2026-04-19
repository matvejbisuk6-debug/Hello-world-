# include <stdio.h>

int main() {
	//Задача 1
	//int width;
	//int height;

	//printf("Enter number1: \n");
	//scanf("%d", &width);

	//printf("Enter number2: \n");
	//scanf("%d", &height);

	//for(int i = 1; i <= width; i++) {
	//	for(int j = 1; j <= height; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//Задача 2
	//int width;
	//int height;

	//printf("Enter number1: \n");
	//scanf("%d", &width);

	//printf("Enter number2: \n");
	//scanf("%d", &height);

	//for(int i = 1; i < width; i++) {
	//	for(int j = 1; j < height; j++) {
	//		if(i == 1 || i == width || j == 1 || j == height) {
	//		printf("*");
	//		} else {
	//			printf(" ");
	//		}
	//	}
	//	printf("\n");
	//}

	//Задача 3
	//int n;

	//do {
	//	printf("Enter number from 1 to 10: \n");
	//    scanf("%d", &n);

	//	if(n <= 10) {
	//		printf("Right \n");
	//	} else {
	//		printf("Wrong, repeat again \n");
	//	}
	//} while(n >= 1 || n <= 10);

	//Задача 4
	//int n = 42;
	//int c;

	//do {
	//	printf("Enter number: \n");
	//	scanf("%d", &c);

	//	if(c > n) {
	//		printf("More \n");
	//	} else if (c < n) {
	//		printf("Less \n");
	//	} else {
	//		printf("Guessed right \n");
	//	}

	//} while(c != n);

	//Задача 5
	//int n = 42;
	//int c;
	//int a = 0;

	//do {
		//printf("Enter number: \n");
		//scanf("%d", &c);

		//if(c > n) {
		//	a++;
		//	printf("%d attempt \n", a);
		//} else if (c < n) {
		//	a++;
		//	printf("%d attempt \n", a);
		//} else {
		//	printf("Guessed right \n");
		//}

	//} while(c != n);

	//Задача 6
	//int n;

	//while(1) {
		//printf("Enter number: \n");
		//scanf("%d", &n);

		//if(n > 0) {
		//	n += n;
		//	printf("%d \n", n);
		//} else if(n <= 0) {
		//	printf("Stop \n");
		//	break;
		//}
	//}
	
	//Задача 7
	int n;
	
	printf("Enter number: \n");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
	if(i % 2 == 0) {
		continue;
	}
	printf("%d \n", i);
	}

	return 0;
}
