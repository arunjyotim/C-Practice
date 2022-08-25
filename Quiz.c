#include<stdio.h>
int score = 0;
int totalScore = 0 ;

void start(){

    int choice;
    printf("\nQ1: Which country won the 1978 FIFA World Cup?");
    printf("\n1.Brazil\n2.Portugal\n3.Germany\n4.Argentina");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    if(choice == 4){
        score++;
        totalScore++;

        printf("\n\tCorrect!\n");

        printf("\nQ2: What is the currency of Japan?");
        printf("\n1.Baht\n2.Yen\n3.Yuan\n4.Won");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 2){
            score++;
            totalScore++;

            printf("\n\tCorrect!\n");

            printf("\nQ3: How many valves does the heart have?");
            printf("\n1.Two\n2.Four\n3.One\n4.Three");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            if(choice == 2){
                score++;
                totalScore++;
                
                printf("\n\tCorrect!\n");

                printf("\nQ4: What's a baby rabbit called?");
                printf("\n1.Kitto\n2.Kitty\n3.Kits\n4.Pub");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);

                if(choice == 3){
                    score++;
                    totalScore++;

                    printf("\n\tCorrect!\n");

                    printf("\nQ5: What is Scooby Doo's full name?");
                    printf("\n1.Scoob Doodles\n2.Scooberth Doo\n3.Scooby Doolbe\n4.Scoobert Doo");
                    printf("\nEnter your choice: ");
                    scanf("%d", &choice);

                    if(choice == 4){
                        score++;
                        totalScore++;
                        printf("\n\tCorrect!\n");
                        printf("\n\tYOU WON!");
                        printf("\n\tScoring All %d", score);
                    }else{
                        printf("\n\tSorry! Game Over!");
                    }


                }else{
                    printf("\n\tSorry! Game Over!");
                }

            }else{
                printf("\n\tSorry! Game Over!");
            }


        }else{
            printf("\n\tSorry!Game Over!");
        }

    }else{
        printf("\n\tSorry!Game Over!");
    }
}
int main(){
    int choice;

    while(1){
        printf("\n------------------------------------------");
        printf("\n\n1.Start\n2.Rules\n3.View Score\n4.Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\n\nThe game is starting.....\n\n");
                score = 0;
                start();
                break;
            case 2: 
                printf("\n\n--------THE RULES--------\n\n");

                printf("\nRule 1: You can not skip any questions.");
                printf("\nRule 2: You can move to the next stage only after answering the correct one");
                printf("\nRule 3: You can see your score after performing the game one time.");
                printf("\nRule 4: You will lose your previous score after starting it over.");
                printf("\nRule 5: You can not select multiple options.");

                break;
            case 3: 
                printf("\n\n-------SCORE BOARD-------\n\n");
                printf("\n\n  Your Last Performance Score is: \n\t\t%d", score);
                printf("\n  Your Total Score is: \n\t\t%d", totalScore);
                break;
            case 4: 
                exit(0);
            default:
                printf("\nEnter either of the four choices.");
                break;

        }
    }
}
