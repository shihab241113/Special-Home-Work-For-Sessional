#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vehcile_code , hour , pass_status ;
    float fee ;

    printf("Enter vehicle code\n (Motor Bike for 1) \n (Car/suv for 2)\n (Bus/Truck for 3)\n");
    scanf("%d", &vehcile_code);

    printf("Enter hour of travel(0-23)");
    scanf("%d", &hour);

    printf("Enter Pass status 1 for local Resident Pass, 0 for Regular pass");
    scanf("%d", &pass_status);



    //check vehicle code and pass base rate

    if(vehcile_code ==1)

    {
        fee = 2.00;
    }

     else if(vehcile_code == 2)
     {
         fee = 5.00 ;
     }

     else if(vehcile_code == 3)
     {
         fee = 10.00 ;
     }

  else {
        printf("Invalid Code\n");
        return 0;
        }


        //hours check

    if (hour < 0 || hour > 23)
    {
        printf("Error: Invalid hour!\n");
        return 0;
    }


     // Check pass status
    if ( pass_status != 0 &&  pass_status != 1)
    {
        printf("Error: Invalid pass status!\n");
        return 0;
    }


    // Peak hour surcharge: 7-9 AM or 5-7 PM
    if ((hour >= 7 && hour <= 9) || (hour >= 17 && hour <= 19))
    {
        fee = fee + (fee * 20 / 100);
    }

    // Local resident pass: 50% discount
    if ( pass_status == 1)
    {
        fee = fee - (fee * 50 / 100);
    }


   {

    printf("Total Toll Fee = $%.2f\n", fee);

    return 0;
}





  printf("Total fee = $%.2f\n",fee);



    return 0;
}
