#include<stdio.h>
// f = (9/5)(c + 32)
// c = (5/9)(f - 32)
// k = c + 273.15
// c = k - 273.15
// k = (5/9)(f - 32) + 273.15 
// f = (9/5)(k - 273.15) + 32

float celcius_to_fahrenheit(float celcius){
     return (9.0/5.0)*celcius + 32.0;
}
float fahrenheit_to_celcius(float fahrenheit){
     return (5.0/9.0)*(fahrenheit - 32.0);
}
float celcius_to_kelvin(float celcius){
     return (celcius + 273.15);
}
float kelvin_to_celcius(float kelvin){
     return (kelvin - 273.15);
}
float fahrenheit_to_kelvin(float fahrenheit){
     return (5.0/9.0)*(fahrenheit - 32.0) + 273.15;
}
float kelvin_to_fahrenheit(float kelvin){
     return (9.0/5.0)*(kelvin - 273.15) + 32.0;
}

int main(){
     float temp, conv_temp;
     int choice;
     char repeat='y';
     while(repeat == 'y' || repeat == 'Y'){
     printf("***Temperature Converter***\n\n");
     printf("Choose the corresponding option to carry on conversion:-\n");
     printf("1.Celcius-Fahrenheit\n");
     printf("2.Fahrenheit-Celcius\n");
     printf("3.Celcius-Kelvin\n");
     printf("4.Kelvin-Celcius\n");
     printf("5.Fahrenheit-Kelvin\n");
     printf("6.Kelvin-Fahrenheit\n\n");

     printf("Enter your choice:-");
     scanf("%d",&choice);

     printf("Enter the temperature to convert:-");
     scanf("%f",&temp);

     switch(choice){
          case 1:
               conv_temp=celcius_to_fahrenheit(temp);
               printf("%.2f Celcius = %.2f Fahrenheit",temp,conv_temp);
               break;
          case 2:
               conv_temp=fahrenheit_to_celcius(temp);
               printf("%.2f Fahrenheit = %.2f Celcius",temp,conv_temp);
               break;
          case 3:
               conv_temp=celcius_to_kelvin(temp);
               printf("%.2f Celcius = %.2f Kelvin",temp,conv_temp);
               break;
          case 4:
               conv_temp=kelvin_to_celcius(temp);
               printf("%.2f Kelvin = %.2f Celcius",temp,conv_temp);
               break;
          case 5:
               conv_temp=fahrenheit_to_kelvin(temp);
               printf("%.2f Fahrenheit = %.2f Kelvin",temp,conv_temp);
               break;
          case 6:
               conv_temp=kelvin_to_fahrenheit(temp);
               printf("%.2f Kelvin = %.2f Fahrenheit",temp,conv_temp);
               break;
          default:
               printf("Invalid Option!!! \n Please enter Valid Option.");
     }
          printf("\n Do you want to perform another conversion? (Y/N):-");
          scanf(" %c",&repeat);
     }
     printf("You have exited the program.");


     return 0;
}