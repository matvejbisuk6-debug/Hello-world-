# include <stdio.h>

int main() {
	//Задача 1
	//int num1;
	//int num2;
	//int num3;
	
	//printf("Enter number 1: ");
	//scanf("%d", &num1);
	
	//printf("Enter number 2: ");
	//scanf("%d", &num2);
	
	//printf("Enter number 3: ");
	//scanf("%d", &num3);
	
	//if(num1 > num2 && num1 > num3) {
	//	printf("%d - Hightest \n", num1);
	//} else if(num2 > num1 && num2 > num3) {
	//	printf("%d - Hightest \n", num2);
	//} else if(num3 > num1 && num3 > num2) {
	//	printf("%d - Highnest \n", num3);
	//}
	
	//Задача 2
	//int year;
	
	//printf("Enter year: ");
	//scanf("%d", &year);
	
	//if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	//	printf("%d - Leap year \n", year);
	//} else {
	//	printf("%d - Year is not Leap year \n", year);
	//}
	
	//Задача 3
	//int side1;
	//int side2;
	//int side3;
	
	//printf("Enter side1: ");
	//scanf("%d", &side1);
	
	//printf("Enter side2: ");
	//scanf("%d", &side2);
	
	//printf("Enter side3: ");
	//scanf("%d", &side3);
	
	//if(side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2) {
	//	printf("The triangle exists \n");
	//} else {
	//	printf("The triangle does not exist \n");
	//}
	
	//Задача 4
	//int num;
	
	//printf("Enter number: ");
	//scanf("%d", &num);
	
	//if(num >= 10 && num <= 20) {
	//	printf("Falls within the interval \n");
	//} else if(num >= 30 && num <= 50) {
	//	printf("Falls within the interval excluding borders \n");
	//}
	
	//Задача 5
	//int temp;
	
	//printf("Enter temperature: \n");
	//scanf("%d", &temp);
	
	//if(temp > 30) {
	//	printf("It's hot, drink water \n");
	//} else if(temp > 20 && temp < 30) {
	//	printf("Normal \n");
	//} else if(temp > 10 && temp < 20) {
	//	printf("It's cool, put on your jacket \n");
	//} else {
	//	printf("It's cold, a hat is required \n");
	//}
	
	//Задача 6
	//int day;
	
	//printf("enter the day of the week number: \n");
	//scanf("%d", &day);
	
	//switch(day) {
	//	case 1:
    //        printf("%d - Monday \n", day);		 
	//	break;
	//	case 2:
	//	    printf("%d - Tuesday \n", day);
	//	break;
	//	case 3:
	//	    printf("%d - Wednesday \n", day);
	//	break;
	//	case 4: 
	//	    printf("%d - Thursday \n", day); 
	//	break;
   	//	case 5:
	//	    printf("%d - Friday /n", day);
	//	break;
	//	case 6:
	//	    printf("%d - Saturday \n", day);
	//	break;
	//	case 7:
	//	    printf("%d - Sunday \n", day);
	//	break;
	//	default:
	//	    printf("Error \n");
	//	break;	
	//}
	
	//Задача 7
	int month;
	
	printf("Enter the month: \n");
	scanf("%d", &month);
	
	switch(month) {
	    case 1:	
		    printf("%d - 31 day in January \n", month);
	    break;
	    case 2:
		    printf("%d - 28 days - leap year/29 days - not a leap year in February \n", month);
		break;
		case 3:
		    printf("%d - 31 days in March \n", month);
		break;
		case 4:
		    printf("%d - 30 days in April \n", month);
		break;
		case 5:
		    printf("%d - 31 days in May \n", month);
		break;
		case 6:
		    printf("%d - 30 days in June \n", month);
		break;
		case 7:
		    printf("%d - 31 days in July \n", month);
		break;
		case 8:
		    printf("%d - 31 days in August \n", month);
		break;
		case 9:
		    printf("%d - 30 days in September \n", month);
		break;
		case 10:
		    printf("%d - 31 days in October \n", month);
		break;
		case 11:
		    printf("%d - 30 days in November \n", month);
		break;
		case 12:
		    printf("%d - 31 days in December \n", month);
		break;
		default:
		    printf("Error \n");
		break;	
	}
	
	return 0;
}