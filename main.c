#include<stdio.h>
int main(void)
{
  int numbers[10]={2,6,8,10,4,2,6,14,20,16};
  int n;
  printf("Input the value of n ");
  scanf("%d",&n);
  int count=0,num;
  for(int i=0;i<10;i++){
    num = numbers[i] % n;
    if(num == 0){
      count++;
    }
  }
  if(count==10){
    printf("The array is divisible by %d ",n);
  }
  else{
    printf("The array is not divisible by %d ",n);
  }
  return 0;
}