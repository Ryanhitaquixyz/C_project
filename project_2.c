

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
    srand(time(0)); 

    int randomnumber=(rand()%3)+1;
    int guessed ;
    int no_of_guessed=0;
    printf("Enter your guessed number\n");
    scanf("%d",&guessed);

    while(guessed!=randomnumber){
        if (guessed>randomnumber){
        printf("Your number is greater ");}

        else if(guessed<randomnumber){
            printf("Your number is lesser ");
        }
        else{
            printf("Congratulations!");

        }
        no_of_guessed++;
    }

    
        


    return 0;
    


    
 }