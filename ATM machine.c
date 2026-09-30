#include <stdio.h>
#include <stdlib.h>

int main()
{


    int menu ,check_balance , Deposit , Withdraw , Exit ;
    int  Balance,pin ;

   printf("Welcome\n");
   printf("Enter Your Pin = ");
   scanf("%d", &pin);

   if (pin == 1234)
   {
     while (1)
     {



    printf("Tap 1 for check balance\n");
    printf("Tap 2 for Deposit\n");
    printf("Tap 3 for withdraw \n");
    printf("Tap 4 for Exit\n");
    scanf("%d", &menu);

    if (menu == 1)
    {
        int back ;
        printf("Your  Balance is 500\n", check_balance);
        printf("Tap 1 for return menu = ");
        scanf("%d", &back);

        if (back == 1)
        {
            continue ;
        }

    }




    if (menu == 2)

    {   int back ;
        printf("Deposit Your Account\n");
        printf("Enter deposited Amount\n");
        scanf("%d", &Deposit);

        if (Deposit > 0)
        {
         Balance = 500 + Deposit ;
         printf("Your Balance is =%d\n",Balance);
         }

        else {
            printf("Invalid Amount\n");

         }

        printf("Tap 1 for return menu = ");
        scanf("%d", &back);

        if (back == 1)
        {
            continue ;
        }
    }


         if (menu == 3)
         {   int back ;
             printf("Enter Amount for Withdraw\n");
             scanf("%d", &Withdraw);
             Balance = 500 - Withdraw ;

             if (Balance >= 0)
            {
                printf("Receive Your Cash\n",Balance);
                printf("Your Balance is =%.2d\n",Balance);

             }
             else
             {
                 printf("Insufficient Fund");

             }

            printf("Tap 1 for return menu = ");
            scanf("%d", &back);

            if (back == 1)
            {
            continue ;
            }
    }

     }


     if (menu == 4)
        {
        printf("Thank You For Banking With Us");

        }

   }

   else
   {
       printf("Wrong Password");
   }

    return 0;
}
