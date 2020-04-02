#include<stdio.h>

void breakdownCurrency(long int); 

void breakdownCurrency(long int amount){
  printf("%d X Rs 2000\n", amount/2000);
  int balance = amount%2000;
  printf("%d X Rs 500\n", balance/500);
  balance = balance % 500;
  printf("%d X Rs 200\n", balance/200);
  balance = balance % 200;
  printf("%d X Rs 100\n", balance/100);
  balance = balance % 100;
  printf("%d X Rs 50\n", balance/50);
  balance = balance % 50;
  printf("%d X Rs 10\n", balance/10);
  balance = balance % 10;
  printf("%d X Rs 5\n", balance/5);
  balance = balance % 5;
  printf("%d X Rs 1\n", balance/1);
  balance = balance % 1;
};

int main(void){
  long int amount;
  printf("Enter an amount to get the number of notes for each denomination of Rs 1,5,10,50,100,200,500,2000: ");
  scanf("%ld",&amount);
  breakdownCurrency(amount);
  return 0;
};
