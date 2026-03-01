#include <stdio.h>

struct User {
    float gpa;
    int id;
};

struct Person {
    int age;
    char gender;
};

/*
  Create a function 
    that compares GPA in between two Users
    and prints the Id of the user with greatest GPA
    if GPA are equal, print "Equal GPA"
*/

void compare(struct User u1, struct User u2) {

    if (u1.gpa > u2.gpa) {
        printf("The ID of the use with the greatest GPA is : %d\n", u1.id);
    }
    else if (u2.gpa > u1.gpa) {
        printf("The ID of the use with the greatest GPA is : %d\n", u2.id);
    }
    else {
        printf("Equal GPA\n");
    }
}

int main() {

    struct Person s1 = { 19, 'M' };
    struct Person s2 = { 20, 'F' };
    struct Person s3 = { 2, 'F' };
    struct Person s4 = { 1, 'M' };
    struct Person s5 = { 17, 'F' };
    struct Person s6 = { 15, 'M' };
    struct Person s7 = { 12, 'M' };
    struct Person s8 = { 18, 'F' };

    struct User u1 = {
        .id = 1927,
        .gpa = 3.77f
    };

    struct User u2 = {
        .id = 1782,
        .gpa = 2.71f
    };

    struct User u3 = {
        .id = 1546,
        .gpa = 3.01f
    };

    struct User u4 = {
        .id = 1762,
        .gpa = 0.2f
    };

    struct User u5 = {
        .id = 1933,
        .gpa = 4.0f
    };

    u1.gpa = 3.2f;
    u1.id = 3972;

    u2.gpa = 4.0f;
    u2.id = 1926;

    u3.gpa = 1.7f;
    u3.id = 1764;

    u4.gpa = 2.9f;
    u4.id = 1975;

    u5.gpa = 0.4f;
    u5.id = 1023;

    compare(u1, u2);
    compare(u3, u4);
}