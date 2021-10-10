#include<stdio.h>
#define TRUE 1
#define FALSE 0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};

int inputyear(void)
{
	int year;
	printf("Please Enter a Year (Example:1998):");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}

int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );

			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			daycode = ( daycode + days_in_month[month] ) % 7;
	}
}

int main(void)
{

	int year, daycode, leapyear;
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
	printf("\n");


    int date, month;
    printf("Please Enter Your Remember Date (Example: dd mm):");
    scanf("%d %d",&date,&month);

        if((date<=10)&&(date>9)&&(month<=01))
    {
        printf("The return of Bangabandhu.");
    }
        else if((date<=19)&&(date>18)&&(month<=01))
    {
       printf("National Teacher Day.");
    }
        else if((date<=21)&&(date>20)&&(month<=02))
    {
        printf("International Mother Language Day.");
    }
        else if((date<=22)&&(date>21)&&(month<=02))
    {
       printf("World Thinking Day.");
    }
        else if((date<=25)&&(date>24)&&(month<=02))
    {
        printf("Pilkhana Killing Day.");
    }
        else if((date<=17)&&(date>16)&&(month<=03))
    {
       printf("National children Day.");
    }
        else if((date<=23)&&(date>22)&&(month<=03))
    {
       printf("National Flag Day.");
    }
        else if((date<=25)&&(date>24)&&(month<=03))
    {
        printf("The Black Night Day.");
    }
        else if((date<=26)&&(date>25)&&(month<=03))
    {
        printf("The Independence Day of Bangladesh");
    }

        else if((date<=7)&&(date>6)&&(month<=04))
    {
        printf("World Health Day");
    }
        else if((date<=23)&&(date>22)&&(month<=04))
    {
        printf("World Book Day");
    }

        else if((date<=16)&&(date>15)&&(month<=12))
    {
        printf("Victory day.");
    }
        else if((date<=25)&&(date>24)&&(month<=12))
    {
        printf("Christmas day.");
    }
        else if((date<=18)&&(date>17)&&(month<=12))
    {
        printf("Birthday of SAKHAWAT.\nMany Many Happy Returns of the Day.");
    }
        else if((date<=10)&&(date>9)&&(month<=10))
    {
        printf("Join a new job.");
    }
        else if((date<=19)&&(date>18)&&(month<=03))
    {
        printf("Start mid-term Examination.");
    }
        else
    {
        printf("Sorry, This days in not storage.");
    }
}

