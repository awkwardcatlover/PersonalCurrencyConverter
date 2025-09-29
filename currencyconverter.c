#include <stdio.h>
#include <stdlib.h>

void welcomeUser()
{
	printf("*******************************************\n");
	puts("***\tTERMINAL CURRENCY CONVERTER\t***");
	printf("*******************************************\n\n");
}

int askUser()
{
	int answer;

	printf("\n*** PLEASE SELECT THE CURRENCY YOU WANT TO CONVERT ***\n");
	printf("\n");
	printf("1. CAD To Euro\n2. Euro To CAD\n3. CAD To US\n4. US To CAD\n5. To quit\n\n");
	printf("*******************************************\n");
	printf("Your Choice : ");
	scanf("%d", &answer);
	printf("\n");

	return answer;
}

void convertCADToEUR()
{

	puts("You have chosen to convert CAD to EURO :");
	puts("Please input the amount of CAD to convert : ");
}

void convertEURToCAD()

{
	puts("You have chosen to convert EUR to CAD :");
	puts("Please input the amount of EUR to convert : ");
}

void convertCADToUS()

{
	int keepGoing = 0;
	do
	{
		double cad = 0;
		printf("\n************************************\n");
		puts("***\tCONVERTING CAD TO US\t***");
		printf("************************************\n\n");
		puts("Please input the amount of CAD to convert : ");
		scanf("%lf", &cad);
		printf("\n%.2f CAD is approximately %.2f US\n", cad, cad * 0.71);
		puts("\nConvert another value? (\"1\" for yes) : ");
		scanf("%d", &keepGoing);

	} while (keepGoing == 1);
}

void convertUSToCAD()

{
	puts("You have chosen to convert US to CAD :");
	puts("Please input the amount of US to convert : ");
}

int main()
{
	welcomeUser();
	int choice;

	do
	{

		choice = askUser();

		if (choice == 1)
		{
			convertCADToEUR();
		}
		else if (choice == 2)
		{
			convertEURToCAD();
		}
		else if (choice == 3)
		{
			convertCADToUS();
		}
		else if (choice == 4)
		{
			convertUSToCAD();
		}
		else if (choice == 5)
		{
			exit(0);
		}
		else
		{
			puts("INVALID CHOICE, PLEASE TRY AGAIN");
		}
	} while (choice != 5);

	return 0;
}
