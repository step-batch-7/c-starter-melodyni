#include<stdio.h>

int factorial(int);
void printfiboSeries(int);
void printOddSeries(int);
void printOddSeries(int);

int factorial(int num){
  if(num == 0){
    return 1;
  }
  return num * factorial(num -1);
}

void printFiboSeries(int term){
  int previousTerm = -1;
  int nextTerm = 1;
  while(term >= 1){
    nextTerm = previousTerm + nextTerm; 
    previousTerm = nextTerm - previousTerm;
    printf("\n%d", nextTerm);
    term--;
  };
};

void printOddSeries(int endOfSeries){
  int num;
  for(num=1; num<=endOfSeries; num+=2){
    printf("%d\n",num);
  };
};

void printEvenSeries(int endOfSeries){
  int num;
  for(num=2; num<=endOfSeries; num+=2){
    printf("%d\n",num);
  };
}

int main(void){
  int num1, num2, num3, num4;

  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num1);
  printf("Factorial of %d: %d", num1, factorial(num1));

  printf("\n\nEnter a number to print fibonacci series upto that number: ");
  scanf("%d", &num2);
  printFiboSeries(num2);

  printf("\n\nEnter a number to print all odd numbers in that range: ");
  scanf("%d", &num3);
  printOddSeries(num3);

  printf("\n\nEnter a number to print all even numbers in that range: ");
  scanf("%d", &num4);
  printEvenSeries(num4);

  return 0;
}