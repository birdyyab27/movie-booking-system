/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <unistd.h>

int main()
{
	int choice,qty,date;
	float price=0,total;
	char option;

	do
	{

		printf("LOADING THE SHOWROOM SYSTEM..\n");
		sleep(1);
		printf(".\n");
		sleep(1);
		printf(".\n");
		sleep(1);
		printf(".\n");
		sleep(1);



		printf("======BIKE SHOWROOM======\n\n\n");

		printf("1.VESPA LX 125\n");
		printf("     TYPE:Premium scooter\n");
		printf("     ENGINE: 124.45 cc \n");
		printf("     MILEAGE: 45km/l\n");
		printf("     PRICE:115000\n");
		printf("     FUEL TANK:7.4 L\n");
		printf("     WEIGHT :114 kg\n");
		printf("     COLOURS:Red,White,Yellow,Black\n\n");
		sleep(3);

		printf("2.TVS JUPITER\n");
		printf("     TYPE:Automatic scooter\n");
		printf("     ENGINE:109.7cc\n");
		printf("     MILEAGE:55KM/l\n");
		printf("     PRICE:80,000\n");
		printf("     FUEL TANK:6L\n");
		printf("     WEIGHT : 107kg\n");
		printf("     COLOURS:White,Grey,Blue,Red\n\n");
		sleep(3);

		printf("3.SUZIKI ACCESS 125\n");
		printf("     TYPE:Automatic scooter\n");
		printf("     ENGINE:124cc\n");
		printf("     MILEAGE:52km/l\n");
		printf("     PRICE:85,000\n");
		printf("     FUEL TANK: 5L\n");
		printf("     WEIGHT :104 kg\n");
		printf("     COLOURS:Blue,Black,Silver,White\n\n");
		sleep(3);

		printf("4.HERO PLEASURE+\n");
		printf("     TYPE:Lightweight scooter\n");
		printf("     ENGINE:110.9 cc\n");
		printf("     MILEAGE:50 km/l\n");
		printf("     PRICE:75,000\n");
		printf("     FUEL TANK:4.8L\n");
		printf("     WEIGHT:106 kg\n");
		printf("     COLOURS:Red,Yellow,White,Black\n\n");
		sleep(3);

		printf("5.YAMAHA FASCINO 125\n");
		printf("     TYPE:Hybrid scooter\n");
		printf("     ENGINE:125 cc\n");
		printf("     MILEAGE:60 km/l\n");
		printf("     PRICE:75,000\n");
		printf("     FUEL TANK:5.2L\n");
		printf("     WEIGHT:99 kg\n");
		printf("     COLOURS:Blue,Red,Black,Cyan\n\n");
		sleep(3);

		printf("6.HONDA ACTIVA 6G\n");
		printf("     TYPE:Automatic scooter\n");
		printf("     ENGINE:109.5 cc\n");
		printf("     MILEAGE:50Km/l\n");
		printf("     PRICE:78,000\n");

		printf("     FUEL TANK:5.3 L\n");
		printf("     WEIGHT:106 kg\n");
		printf("     COLOURS:Black,Blue,Red,Grey,White\n\n");
		sleep(3);

		printf("Enter your choice between(1-6):");
		scanf("%d",&choice);

		printf("Enter the quantity:");
		scanf("%d",&qty);


		switch (choice) {

		case 1:
			price=115000;
			printf("Congratulations!!You have selected VESPA LX 125\n");
			sleep(2);
			printf("DIWALI OFFER:You get a FREE Cooker\n");
			break;

		case 2:
			price=80000;
			printf("Congratulations!!You have selected TVS JUPITER\n");
			sleep(2);
			printf("DIWALI OFFER:You get a FREE Helmet\n");
			break;

		case 3:
			price=85000;
			printf("Congratulations!!You have selected SUZIKI ACCESS 125\n");
			sleep(2);
			printf("DIWALI OFFER:You get a FREE Smart watch\n");
			break;

		case 4:
			price=75000;
			printf("Congratulations!!You have selected HERO PLEASURE+\n");
			sleep(2);
			printf("DIWALI OFFER:You get a FREE 1-year free service package\n");
			break;

		case 5:
			price=75000;
			printf("Congratulations!!You have selected YAMAHA FASCINO 125\n");
			sleep(2);
			printf("DIWALI OFFER:You get a FREE Bluetooth Earbuds\n");
			break;

		case 6:
			price=78000;
			printf("Congratulations!!You have selected HONDA ACTIVA 6G\n");
			sleep(2);
			printf("DIWALI OFFER:You get a portable speaker\n");
			break;

		default:
			printf("invalid choice\n");
			break;
		}

		total=price*qty;
		printf("the date of purchase:");
		scanf("%d",&date);

		printf("\n=========BILL==========\n");
		printf("Bike price:     %.2f\n",price);
		printf("QUANTITY:        %d\n",qty);
		sleep(2);
		printf("Total Amount:    %.2f\n",total);
		printf("Date of purchase:%d\n\n",date);
		printf("=========================\n");

		printf("\n do you want to see the menu again?(y/n):");
		scanf(" %c",&option);

	}
	while(option=='y'||option=='Y') ;



	printf("\n\n****************************************************\n\n");
	printf("      thank you for visiting the showroom!!\n");
	printf("     HAPPY DIWALI FROM OUR SHOWROOM!!\n      ");
	printf("\n\n*****************************************************\n");


	return 0;
}
