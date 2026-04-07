# include <stdio.h>

int main() {
	//Задача 1
	//int arr[3] = {5, 10, 15};
	//int sum;
	
	//sum = arr[0] + arr[1] + arr[2];
	//printf("%d + %d + %d = %d", arr[0], arr[1], arr[2], sum);
	
	//Задача 2
	//int arr[4] = {8, 12, 16, 20};
	//double avg;
	
	//avg = (arr[0] + arr[1] + arr[2] + arr[3]) / 4.0;
	//printf("result: %f", avg);
	
	//Задача 3
	//int arr[5] = {100, 50, 25, 10, 5};
	
	//printf("%d - %d \n", arr[0], arr[1]);
	//printf("%d - %d \n", arr[2], arr[3]);
	//printf("%d - %d \n", arr[4], arr[0]);
	
	//Задача 4
	//int arr[3] = {7, 3, 9};
	//int res1;
	//int res2;
	//int res3;
	
	//res1 = arr[0] * arr[1] + arr[2];
	//res2 = arr[2] - arr[0] / arr[1];
	//res3 = (arr[0] + arr[1] * arr[2]) / 2;
	
	//printf("Result 1 = %d \n", res1);
	//printf("Result 2 = %d \n", res2);
	//printf("Result 3 = %d \n", res3);
	
	//Задача 5
	//int arr[6] = {10, 20, 30, 40, 50, 60};
	
	//arr[1 + 1];
	//arr[5 - 2];
	//arr[2 * 2];
	//arr[6 / 2];
	
	//printf("%d \n", arr[1 + 1]);
	//printf("%d \n", arr[5 - 2]);
	//printf("%d \n", arr[2 * 2]);
	//printf("%d \n", arr[6 / 2]);
	
	//Задача 6
	int arr[2] = {10, 20};
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
	
	printf("%d = %d", arr[0], arr[1]);
	
	return 0;
}