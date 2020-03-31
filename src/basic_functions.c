#include<stdio.h>
#include<math.h>

char isEven(int);
char isOdd(int);
long int square(int);
long int cube(int);
double calcSI(double,double,double);
double calcCI(double,double,double);
double convertInCentigrade(double);
double convertInFahrenheit(double);

char isEven(int num){
  return num % 2 == 0;
};

char isOdd(int num){
  return !isEven(num);
};

long int square(int num){
  return num * num;
};

long int cube(int num){
  return square(num) * num;
};

double calcSI(double principalAmount, double rate, double time){
  return (principalAmount*rate*time)/100;
}

double calcCI(double principalAmount, double rate, double time){
  return (principalAmount*(pow(1+rate/100,time)))-principalAmount;
}

double convertInCentigrade(double tempInFahrenheit){
  return ((tempInFahrenheit-32)*5)/9;
}

double convertInFahrenheit(double tempInCentigrade){
  return (tempInCentigrade*9)/5+32;
}


int main(void){
  int num1, num2, num3, num4, num5;
  double principalAmount1, rate1, time1, principalAmount2, rate2, time2;
  double tempInCentigrade,tempInFahrenheit;
  printf("Enter a number to check whether it is even or not: ");
  scanf("%d", &num1);
  printf("%d is %s", num1, isEven(num1)? "even":"not even");

  printf("\n\nEnter a number to check whether it is odd or not: ");
  scanf("%d", &num2);
  printf("%d is %s", num2, isOdd(num2)? "odd":"not odd");

  printf("\n\nEnter a number to get square of it: ");
  scanf("%d", &num3);
  printf("Square of %d is %ld", num3, square(num3));

  printf("\n\nEnter a number to get cube of it: ");
  scanf("%d", &num4);
  printf("Cube of %d is %ld", num4, cube(num4));

  printf("\n\nCalculate Simple Interest\nEnter Principal Amount: ");
  scanf("%lf", &principalAmount1);
  printf("Enter Rate: ");
  scanf("%lf", &rate1);
  printf("Enter Time Period: ");
  scanf("%lf", &time1);
  printf("Simple Interest: %lf", calcSI(principalAmount1,rate1,time1));

  printf("\n\nCalculate Compound Interest\nEnter Principal Amount: ");
  scanf("%lf", &principalAmount2);
  printf("Enter Rate: ");
  scanf("%lf", &rate2);  
  printf("Enter Time Period: ");
  scanf("%lf", &time2);
  printf("Compound Interest: %lf", calcCI(principalAmount2,rate2,time2));

  printf("\n\nEnter temperate in fahrenheit to get in centigrade: ");
  scanf("%lf",&tempInFahrenheit);
  printf("temperature in Centigrade: %lf", convertInCentigrade(tempInFahrenheit));

  printf("\n\nEnter temperate in fahrenheit to get in centigrade: ");
  scanf("%lf",&tempInCentigrade);
  printf("temperature in Centigrade: %lf", convertInFahrenheit(tempInCentigrade));
};

