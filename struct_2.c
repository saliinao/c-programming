#include <stdio.h>

struct Address {
    char district[50];
    char city[50];
    char street[50];
    int ward;
};

struct Employee {
    int id;
    int age;
    char gender;
    float salary;
    struct Address addr;
};

int main() {

    struct Employee e1 = {
        .id = 1927,
        .age = 20,
        .gender= 'F',
        .salary = 40000.5f,
        .addr = { 
            .district = "Kathmandu",
            .city = "Baneshowr",
            .street = "Sesame Street",
            .ward = 6
        }
    };
}