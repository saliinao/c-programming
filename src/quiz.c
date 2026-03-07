#include<stdio.h>
int main() {
    int score; char option[4]; 
    char array[4]={'B','D', 'C', 'A'};

    printf("Answer these 4 multiple choice questions: Each question is worth 1 marks. Make sure to answer with a capital letter");
    
    printf("\n1. What is the national bird of The United States of America?\n A. Vulture\n B. Bald Eagle\n C. Toucan\n D.Kiwi\n ");
    scanf(" %c", &option[0]);
    fflush(stdout);

    printf("\n2. What is the capital of Egypt?\n A. Nairobi \n B. Kampala\n C. Lagos\n D Cairo\n"); 

    scanf(" %c", &option[1]);
     
    printf("\n3. How many colours are there in the French flag?\n A. 1 \n B. 2\n C. 3\n D.4\n ");
    scanf(" %c", &option[2]);

    printf("\n4. In which continent is the Sahara Desert located?\n A. Africa \n B. Asia \n C. North America \n D.South America\n ");
    scanf(" %c", &option[3]);

    for (int i = 0; i < 4; i++) {
        if (array[i] == option[i]) {
            printf("Number %d is correct, answer is %c\n", i+1, array[i]);
       
        }
        else {
            printf("Number %d is incorrect, correct answer is %c\n", i+1, array[i]);
        }
    }

}