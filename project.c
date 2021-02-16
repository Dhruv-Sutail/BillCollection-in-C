#include<stdio.h>
#include<string.h>


void main()
{

    char owner[100],street[200],district[100],house[10],id[7],meter[10];
    int n,d,j;
    float kilowatt=0,bill=0,currentreading=0,readingchange=0,e=0,lastreading=0;
  run:  printf("*Electricity Bill Calculation*");
        printf("\nEnter Owners Name:");
        scanf("%s",&owner);
        printf("Enter ID Number:");
        scanf("%s",&id);
        printf("Enter Meter Number:");
    scanf("%s",&meter);
    printf("Enter House Number:");
    scanf("%s",&house);
    printf("Enter Area/Street:");
    scanf("%s",&street);

          printf("\npress 1 for Ahmedabad");

          printf("\tpress 2 for Mehsana");

          printf("\tpress 3 for Rajkot");

          printf("\npress 4 for Bhavnagar");

          printf("\tpress 5 for Surat");

          printf("\tpress 6 for Vadodara");

          printf("\npress 7 for Kheda");

          printf("\tpress 8 for Banaskatha");

          printf("\tpress 9 for Sabarkatha");

          printf("\npress 10 for Jamnagar");

          printf("\tpress 11 for Junagadh");

          printf("\tpress 12 for Kutch");

          printf("\npress 13 for Snagar");

          printf("\tpress 14 for Amreli");

          printf("\tpress 15 for Valsad");

          printf("\npress 16 for Bharuch");

          printf("\tpress 17 for Panchmahal");

          printf("\tpress 18 for Gandhinagar");

          printf("\npress 19 for Bardoli");

          printf("\tpress 20 for Dahod");

          printf("\tpress 21 for Navsari");

          printf("\npress 22 for Narmada");

          printf("\tpress 23 for Anand");

          printf("\tpress 24 for Patan");

          printf("\npress 25 for Porbandar");

          printf("\tpress 26 for Vyara");

          printf("\tpress 27 for Ahmedabad East");

          printf("\npress 30 for Aahwa ");

          printf("\tpress 31 for Modasa");

          printf("\tpress 32 for Verawal");

          printf("\npress 33 for Botad");

          printf("\tpress 34 for Udepur");

          printf("\tpress 35 for Lunavada");

          printf("\npress 36 for Morbi");

          printf("\tpress 37 for Khambha");

          printf("\tpress 38 for Bavla");
		printf("\nRefer above for choosing District");
		printf("\nEnter Number Corresponding to your District: ");
		scanf("%d",&n);

    printf("\nEnter Current Reading(In kilowatts):");
    scanf("%f",&readingchange);
    printf("Enter Last Reading(In kilowatts):");
    scanf("%f",&lastreading);

    printf("Reading change Request(1-yes/0-No):");
    scanf("%d",&d);
	if(d==1)
	{
		printf("Enter Reading change:");
		scanf("%f",&readingchange);
		printf("\nReading change is %.3f",readingchange);
		printf("\nConsumption in kilowatt=Current Reading-Last Reading ");
		kilowatt=readingchange-lastreading;
		printf("\nConsumption in Kilowatt=%.3f",kilowatt);
    		//scanf("%f",&kilowatt);
    		j=kilowatt*1000;
    	printf("\nConsumption in Watts=%d",j);
			if(n==1)
			{
				if(kilowatt<=1)
				{
					bill=3.2*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.2*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.2*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.2*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.2*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==2)
			{
				if(kilowatt<=1)
				{
					bill=3.05*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.05*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.05*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==3)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==4)
			{
				if(kilowatt<=1)
				{
					bill=3.01*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.01*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.01*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.01*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.01*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==5)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==6)
			{
				if(kilowatt<=1)
				{
					bill=3.05*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.05*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.05*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==7)
			{
				if(kilowatt<=1)
				{
					bill=3.5*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.5*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.5*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.5*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.5*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==8)
			{
				if(kilowatt<=1)
				{
					bill=3.47*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.47*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.47*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.47*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.47*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==9)
			{
				if(kilowatt<=1)
				{
					bill=3.97*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.97*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.97*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.97*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.97*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==10)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==11)
			{
				if(kilowatt<=1)
				{
					bill=3.32*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.32*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.32*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==12)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==13)
			{
				if(kilowatt<=1)
				{
					bill=3.88*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.88*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.88*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.88*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.88*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==14)
			{
				if(kilowatt<=1)
				{
					bill=3.43*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.43*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.43*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.43*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.43*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==15)
			{
				if(kilowatt<=1)
				{
					bill=3.72*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.72*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.72*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==16)
			{
				if(kilowatt<=1)
				{
					bill=3.32*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.32*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.32*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==17)
			{
				if(kilowatt<=1)
				{
					bill=3.55*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.55*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.55*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1500;
					printf("Amount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==18)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==19)
			{
				if(kilowatt<=1)
				{
					bill=3.89*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.89*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.89*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==20)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==21)
			{
				if(kilowatt<=1)
				{
					bill=3.45*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.45*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.45*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==22)
			{
				if(kilowatt<=1)
				{
					bill=3.56*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.56*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.56*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.56*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.56*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==23)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==24)
			{
				if(kilowatt<=1)
				{
					bill=3.37*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.37*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.37*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.37*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.37*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==25)
			{
				if(kilowatt<=1)
				{
					bill=3.4*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.4*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.4*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.4*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.4*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==26)
			{
				if(kilowatt<=1)
				{
					bill=3.22*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.22*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.22*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.22*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.22*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==27)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==28)
			{
				if(kilowatt<=1)
				{
					bill=3.45*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.45*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.45*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==29)
			{
				if(kilowatt<=1)
				{
					bill=3.75*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.75*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.75*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.75*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.75*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==30)
			{
				if(kilowatt<=1)
				{
					bill=3.69*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.69*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.69*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.69*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.69*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==31)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==32)
			{
				if(kilowatt<=1)
				{
					bill=3.72*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.72*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.72*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==33)
			{
				if(kilowatt<=1)
				{
					bill=3.55*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.55*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.55*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==34)
			{
				if(kilowatt<=1)
				{
					bill=3.89*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.89*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.89*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==35)
			{
				if(kilowatt<=1)
				{
					bill=3.9*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.9*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.9*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.9*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.9*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==36)
			{
				if(kilowatt<=1)
				{
					bill=3.27*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.27*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.27*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.27*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.27*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==37)
			{
				if(kilowatt<=1)
				{
					bill=3.23*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.23*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.23*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.23*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.23*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==38)
			{
				if(kilowatt<=1)
				{
					bill=3.67*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.67*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.67*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.67*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.67*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
	}
	else
{
    printf("\nConsumption in kilowatt=Current Reading-Last Reading");
    kilowatt=readingchange-lastreading;
    printf("\nConsumption in Kilowatt=%.3f",kilowatt);
    //scanf("%f",&kilowatt);
    j=kilowatt*1000;
    printf("\nConsumption in Watts=%d",j);
		if(n==1)
			{
				if(kilowatt<=1)
				{
					bill=3.2*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.2*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.2*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.2*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.2*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==2)
			{
				if(kilowatt<=1)
				{
					bill=3.05*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.05*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.05*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==3)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==4)
			{
				if(kilowatt<=1)
				{
					bill=3.01*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.01*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.01*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.01*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.01*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==5)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==6)
			{
				if(kilowatt<=1)
				{
					bill=3.05*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.05*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.05*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.05*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==7)
			{
				if(kilowatt<=1)
				{
					bill=3.5*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.5*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.5*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.5*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.5*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==8)
			{
				if(kilowatt<=1)
				{
					bill=3.47*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.47*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.47*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.47*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.47*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==9)
			{
				if(kilowatt<=1)
				{
					bill=3.97*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.97*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.97*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.97*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.97*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==10)
			{
				if(kilowatt<=1)
				{
					bill=3.12*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.12*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.12*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.12*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==11)
			{
				if(kilowatt<=1)
				{
					bill=3.32*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.32*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.32*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==12)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==13)
			{
				if(kilowatt<=1)
				{
					bill=3.88*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.88*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.88*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.88*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.88*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==14)
			{
				if(kilowatt<=1)
				{
					bill=3.43*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.43*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.43*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.43*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.43*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==15)
			{
				if(kilowatt<=1)
				{
					bill=3.72*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.72*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.72*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==16)
			{
				if(kilowatt<=1)
				{
					bill=3.32*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.32*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.32*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.32*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==17)
			{
				if(kilowatt<=1)
				{
					bill=3.55*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.55*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.55*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1500;
					printf("Amount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==18)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==19)
			{
				if(kilowatt<=1)
				{
					bill=3.89*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.89*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.89*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==20)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==21)
			{
				if(kilowatt<=1)
				{
					bill=3.45*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.45*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.45*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==22)
			{
				if(kilowatt<=1)
				{
					bill=3.56*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.56*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.56*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.56*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.56*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==23)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==24)
			{
				if(kilowatt<=1)
				{
					bill=3.37*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.37*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.37*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.37*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.37*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==25)
			{
				if(kilowatt<=1)
				{
					bill=3.4*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.4*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.4*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.4*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.4*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==26)
			{
				if(kilowatt<=1)
				{
					bill=3.22*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.22*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.22*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.22*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.22*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==27)
			{
				if(kilowatt<=1)
				{
					bill=3.09*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.09*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.09*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.09*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==28)
			{
				if(kilowatt<=1)
				{
					bill=3.45*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.45*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.45*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.45*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==29)
			{
				if(kilowatt<=1)
				{
					bill=3.75*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.75*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.75*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.75*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.75*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==30)
			{
				if(kilowatt<=1)
				{
					bill=3.69*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.69*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.69*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.69*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.69*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==31)
			{
				if(kilowatt<=1)
				{
					bill=3.49*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.49*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.49*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.49*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==32)
			{
				if(kilowatt<=1)
				{
					bill=3.72*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.72*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.72*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.72*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==33)
			{
				if(kilowatt<=1)
				{
					bill=3.55*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.55*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.55*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.55*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==34)
			{
				if(kilowatt<=1)
				{
					bill=3.89*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.89*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.89*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.89*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==35)
			{
				if(kilowatt<=1)
				{
					bill=3.9*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.9*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.9*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.9*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.9*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==36)
			{
				if(kilowatt<=1)
				{
					bill=3.27*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.27*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.27*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.27*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.27*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==37)
			{
				if(kilowatt<=1)
				{
					bill=3.23*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.23*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.23*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.23*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.23*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}
			else if(n==38)
			{
				if(kilowatt<=1)
				{
					bill=3.67*kilowatt;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>1 && kilowatt<=2)
				{
					e=kilowatt-1;
					bill=(3.67*e)+500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>2 && kilowatt<=5)
				{
					e=kilowatt-1;
					bill=(3.67*e)+900;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>5 && kilowatt<=10)
				{
					e=kilowatt-1;
					bill=(3.67*e)+1500;
					printf("\nAmount to be paid is %.3f",bill);
				}
				else if(kilowatt>10)
				{
					e=kilowatt-1;
					bill=(3.67*e)+1900;
					printf("\nAmount to be paid is %.3f",bill);
				}
			}

}
		if(n==1)
		{
			printf("\nUnit charges is Rupees 3.2");
		}
		else if(n==2)
		{
			printf("\nUnit charges is Rupees 3.05");
		}
		else if(n==3)
		{
			printf("\nUnit charges is Rupees 3.12");
		}
		else if(n==4)
		{
			printf("\nUnit charges is Rupees 3.01");
		}
		else if(n==5)
		{
			printf("\nUnit charges is Rupees 3.12");
		}
		else if(n==6)
		{
			printf("\nUnit charges is Rupees 3.05");
		}
		else if(n==7)
		{
			printf("\nUnit charges is Rupees 3.5");
		}
		else if(n==8)
		{
			printf("\nUnit charges is Rupees 3.47");
		}
		else if(n==9)
		{
			printf("\nUnit charges is Rupees 3.97");
		}
		else if(n==10)
		{
			printf("\nUnit charges is Rupees 3.12");
		}
		else if(n==11)
		{
			printf("\nUnit charges is Rupees 3.32");
		}
		else if(n==12)
		{
			printf("\nUnit charges is Rupees 3.09");
		}
		else if(n==13)
		{
			printf("\nUnit charges is Rupees 3.88");
		}
		else if(n==14)
		{
			printf("\nUnit charges is Rupees 3.43");
		}
		else if(n==15)
		{
			printf("\nUnit charges is Rupees 3.72");
		}
		else if(n==16)
		{
			printf("\nUnit charges is Rupees 3.32");
		}
		else if(n==17)
		{
			printf("\nUnit charges is Rupees 3.55");
		}
		else if(n==18)
		{
			printf("\nUnit charges is Rupees 3.49");
		}
		else if(n==19)
		{
			printf("\nUnit charges is Rupees 3.89");
		}
		else if(n==20)
		{
			printf("\nUnit charges is Rupees 3.09");
		}
		else if(n==21)
		{
			printf("\nUnit charges is Rupees 3.45");
		}
		else if(n==22)
		{
			printf("\nUnit charges is Rupees 3.56");
		}
		else if(n==23)
		{
			printf("\nUnit charges is Rupees 3.49");
		}
		else if(n==24)
		{
			printf("\nUnit charges is Rupees 3.37");
		}
		else if(n==25)
		{
			printf("\nUnit charges is Rupees 3.4");
		}
		else if(n==26)
		{
			printf("\nUnit charges is Rupees 3.22");
		}
		else if(n==27)
		{
			printf("\nUnit charges is Rupees 3.09");
		}
		else if(n==28)
		{
			printf("\nUnit charges is Rupees 3.45");
		}
		else if(n==29)
		{
			printf("\nUnit charges is Rupees 3.75");
		}
		else if(n==30)
		{
			printf("\nUnit charges is Rupees 3.69");
		}
		else if(n==31)
		{
			printf("\nUnit charges is Rupees 3.49");
		}
		else if(n==32)
		{
			printf("\nUnit charges is Rupees 3.72");
		}
		else if(n==33)
		{
			printf("\nUnit charges is Rupees 3.55");
		}
		else if(n==34)
		{
			printf("\nUnit charges is Rupees 3.89");
		}
		else if(n==35)
		{
			printf("\nUnit charges is Rupees 3.9");
		}
		else if(n==36)
		{
			printf("\nUnit charges is Rupees 3.27");
		}
		else if(n==37)
		{
			printf("\nUnit charges is Rupees 3.23");
		}
		else if(n==38)
		{
			printf("\nUnit charges is Rupees 3.67");
		}

    		printf("\n---------------------------------------------------------------------------------------------------------\n");
		printf("Owner Name| ID Number| Meter Number| House Number|   Area Name  | District(Acc. to above table)| Current Reading|");
    		printf("\n----------------------------------------------------------------------------------------------------------\n");
		printf("\n %s    | %s       | %s         | %s          |   %s       | %d                           | %.3f",owner,id,meter,house,street,n,readingchange);
            printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("Request for Reading Change(1-yes/0-no)| Last Reading| Consumption in Kilowatt| Amount to be Paid|");
             printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n  %d                                   | %.3f     | %.3f                   | %.3f \n\n",d,lastreading,kilowatt,bill);
    goto run;
}


