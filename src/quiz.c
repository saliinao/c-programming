#include <stdio.h>
#include <string.h>

struct Question {
    char title[200];
    char options[4][50];
    char answer[50];
};

typedef struct Question Question;

Question create_question(const char* title, const char* a, const char* b, const char* c, const char* d, const char* answer){
    Question question;
    strcpy(question.title, title);
    strcpy(question.options[0], a);
    strcpy(question.options[1], b);
    strcpy(question.options[2], c);
    strcpy(question.options[3], d);
    strcpy(question.answer, answer);
    return question;
}

void print_question(Question question) {
    printf("%s\n", question.title);
    printf("Options:\n");
    for (int i = 0; i < 4; i++){
        printf("\t%d. %s\n", i+1, question.options[i]);
        
    }

}
int main() {
    int score = 0; 
    Question questions[4];

    printf("Answer these 4 multiple choice questions: Each question is worth 1 marks. Make sure to answer with a capital letter\n\n");

    questions[0] = create_question(
        "What is the national bird of The United States of America",
        "Vulture", "Bald Eagle", "Toucan", "Kiwi", 
        "Bald Eagle"
    );

    questions[1] = create_question(
        "What is the capital of Egypt",
        "Nairobi", "Kampala", "Lagos", "Cairo", 
        "Cairo"
    );

    questions[2] = create_question(
        "How many colours are there in the French flag",
        "1", "2", "3", "4", 
        "3"
    );
    
     questions[3] = create_question(
        "In which continent is the Sahara Desert located",
        "Africa", "Asia", "North America", "South America", 
        "Africa"
    );
    int choice;
    for (int i = 0; i < 4; i++) {
        printf("\n");
        print_question(questions[i]);
        printf("\n");
        printf("Choice: ");
        scanf("%d",&choice);
        printf("\n");
    }

    return 0;
}