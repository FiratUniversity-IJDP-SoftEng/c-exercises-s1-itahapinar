#include<stdio.h>

void sayHello(char name[50]){
    
    printf("Hello %s",name);
   
}

int main(){
    char name[50];
    printf("Please enter your name : ");
    scanf("%s",name);
    sayHello(name);
    
}
