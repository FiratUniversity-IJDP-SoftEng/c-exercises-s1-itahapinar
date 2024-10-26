#include<stdio.h>
int main(){
    printf("Do you have a cat or dog ?\n If you have, please press 1, \n If you don't have, please press 2 : ");
    int  a ;
    scanf("%d",&a);
    if (a == 1)
    {
        printf("Which one do you have? \n Dog => 1 Cat => 2 : ");
        int b;
        scanf("%d",&b);
        if (b == 1){
         printf("Your animal has hav hav hav voice.");
        }
        else if (b==2);{
            printf("Your animal has miyav miyav voice.");
        }
        }
    else{
        printf("You don't have any pet.");
    }
        
    
}
