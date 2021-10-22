#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int number,Guess, nguesses=1;
    srand(time(0));
    number= rand()%150+1; // generate the random number between 1 and 150
    do{
        printf("Guess the number between 1 to 150\n");
        scanf("%d",& Guess);
        

        if(Guess>number){
            printf("Lower number please!\n");
        }
        else if (Guess<number){
            printf("Higher number please!\n");
        
        }
        else {
            printf("you Guessted it in%d attempts\n", nguesses);
        }
        nguesses++;
     } while(Guess!=number);
    
    return 0;
}