#include <stdio.h>

int main(){
  int age;
  int i;
  printf("Please enter your age:");
  scanf("%d",&age);
  for(i = 1;i <=age; i++){
    printf("Happy Birthday!\n");
  }
  return 0;
}
