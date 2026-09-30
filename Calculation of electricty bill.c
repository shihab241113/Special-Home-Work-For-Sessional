#include <stdio.h>
#include <stdlib.h>

int main()
{

    float unit_consumed ;
    int peak_hours ,account_type ;
    float bill ;

    printf("Enter Unit consumed in Kwh = ");
    scanf("%f", &unit_consumed);

    printf("Enter Peak Hours (1 for High , 0 for Normal) = ");
    scanf("%d", &peak_hours);

    printf("Enter Account Type (1 for Subsidized Low-Income, 0 for Standard) = ");
    scanf("%d", &account_type);

    if (unit_consumed <=100)
    {
        bill = unit_consumed*0.1 ;
    }

    else if (unit_consumed >=100 && unit_consumed <=200)
    {
        bill = 100*0.1 + (unit_consumed-100)*0.15 ;
    }

    else if (unit_consumed >200)
        {

        bill = 100*0.1 + 100*0.15 + (unit_consumed-200)*0.25 ;

        }

        else
        {
            printf("Invalid Input");
            return 0 ;
        }

        //bill in peak hours

        if ( peak_hours == 1)
        {
            bill = bill + 15 ; //demand fee 15$
        }

        else if ( peak_hours == 0)
        {
            bill = bill ;//normal bill
        }

        else
        {
            printf("Invalid Input");
            return 0 ;
        }

        //bill in low income rebate
        if (account_type == 1) //subsidized low income
        {
           bill = bill - 0.2*bill ;
        }

        else if (account_type == 0)
        {
            bill = bill ; //normal bill
        }

        else
        {
            printf("Invalid Input");

            return 0 ;
        }

    printf("Total bill = $%.2f",bill);


    return 0;
}
