#include <stdio.h>
#include <stdlib.h>

void welcomeUser()
{
	printf("*******************************************\n");
	puts("***\tOFFLINE TERMINAL CURRENCY CONVERTER\t***");
	printf("*******************************************\n");
	printf("THIS TERMINAL CURRENCY CONVERTER USES STATIC APPROXIMATE VALUES TO MAKE CONVERSIONS\n");
}

int askUser()
{
	int answer;

	printf("\n*** PLEASE SELECT THE CURRENCY YOU WANT TO CONVERT ***\n\n");
	printf("1. CAD To Euro\n2. Euro To CAD\n3. CAD To US\n4. US To CAD\n5. To quit\n\n");
	printf("*******************************************\n");
	printf("Your Choice : ");
	scanf("%d", &answer);
	printf("\n");

	return answer;
}

void convertCADToEUR()
{

	int keepGoing = 0;
	do
	{
		double cad = 0;
		printf("\n************************************\n");
		puts("***\tCONVERTING CAD TO EUROS\t***");
		printf("************************************\n\n");
		puts("Please input the amount of CAD to convert to euros : ");
		scanf("%lf", &cad);
		printf("\n%.2f CAD is approximately %.2f Euros (1 CAD roughly equals 0.61 Euros).\n", cad, cad * 0.61);
		puts("\nConvert another value? (\"1\" for yes) : ");
		scanf("%d", &keepGoing);

	} while (keepGoing == 1);
}

void convertEURToCAD()

{
	int keepGoing = 0;
	do
	{
		double euros = 0;
		printf("\n************************************\n");
		puts("***\tCONVERTING EUROS TO CAD\t***");
		printf("************************************\n\n");
		puts("Please input the amount of Euros to convert to CAD : ");
		scanf("%lf", &euros);
		printf("\n%.2f Euros is approximately %.2f CAD (1 Euro roughly equals 1.62 CAD).\n", euros, euros * 1.62);
		puts("\nConvert another value? (\"1\" for yes) : ");
		scanf("%d", &keepGoing);

	} while (keepGoing == 1);
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
		puts("Please input the amount of CAD to convert to US: ");
		scanf("%lf", &cad);
		printf("\n%.2f CAD is approximately %.2f US (1 CAD roughly equals 0.71 US).\n", cad, cad * 0.71);
		puts("\nConvert another value? (\"1\" for yes) : ");
		scanf("%d", &keepGoing);

	} while (keepGoing == 1);
}

void convertUSToCAD()

{
	int keepGoing = 0;
	do
	{
		double us = 0;
		printf("\n************************************\n");
		puts("***\tCONVERTING US TO CAD\t***");
		printf("************************************\n\n");
		puts("Please input the amount of US to convert to CAD: ");
		scanf("%lf", &us);
		printf("\n%.2f US is approximately %.2f CAD (1 US roughly equals 1.38 CAD).\n", us, us * 1.38);
		puts("\nConvert another value? (\"1\" for yes) : ");
		scanf("%d", &keepGoing);

	} while (keepGoing == 1);
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
