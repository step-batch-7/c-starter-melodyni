#include<stdio.h>

void populateFiboSeries(int *fibo, int terms){
  fibo[0] = 0;
  if(terms == 1){
    return;
  };
  if(terms == 2){
    fibo[1] = 1;
    return;
  };
  populateFiboSeries(fibo,terms-1);
  fibo[terms-1] = fibo[terms-2]+fibo[terms-3];
};

int main(void){
  int terms ;
  printf("Enter a number to print fibonacci series upto that number: ");
  scanf("%d", &terms);
  int fibo[terms];
  populateFiboSeries(fibo,terms);
  for(int index=0;index<terms;index++){
    printf("\n%d",fibo[index]);
  };
  return 0;
};

