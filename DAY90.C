// Q140: Define a struct with enum Gender and print person's gender.


#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Sameer", MALE};

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}