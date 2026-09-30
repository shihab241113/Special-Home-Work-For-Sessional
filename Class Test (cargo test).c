
//PROBLEMS CONCRETE PIPE WEIGHT & TRUCK CARGO CHECK


#include <stdio.h>
#include <math.h>
int main()
{
    //input function
    float pi = 3.1416;
    float outer_radius = 0.5,inner_radius = 0.4,length = 2.5;

    float volume , weight_kg ;// weight = kg
    float weight_metric_ton, total_cargo_weight ;
    int num_pipes ;

    printf("Enter The Number of Pipes to load= ");
    scanf("%d", &num_pipes);

    if (num_pipes <= 0)

    {
        printf("Invalid Input ");
    }
    else {

  printf("-----Delivery Summery-----\n");

    //calculation the volume
     volume = pi*((outer_radius*outer_radius)-(inner_radius*inner_radius))*length;



     //weight calculation

     weight_kg = volume*2400 ; //where concrete density = 2400 kg/m^3

        printf("The weight  of 1 pipe : %.4f ",  weight_kg);
        printf("kg\n");

    //weight in metric ton

        weight_metric_ton = weight_kg /1000 ;




       total_cargo_weight = weight_metric_ton*num_pipes ;

      printf("Total cargo weight  : %.4f ",total_cargo_weight);
      printf("Tons\n");


      if (total_cargo_weight <= 15 )
      {
        printf("Status = Safe load! Ready for Transport \n");

      }

      else printf("Status = Over Weight! Not Ready For Transport \n");


    }


    return 0;
}
