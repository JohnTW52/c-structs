#include <stdio.h>
#include <string.h>

struct Student{
        char name[50];
        char id[9];
        float gpa;
    };

int main(){
    
    //struct Student s1;
    //struct Student s2;

    // strcpy(s1.name, "John");
    // strcpy(s1.id, "01515805");
    // s1.gpa = 4.0;

    // strcpy(s2.name, "Matt");
    // strcpy(s2.id, "04891565");
    // s2.gpa = 1.9;

    struct Student s1 = {
        "John",
        "R01515805",
        4.0
    };

    struct Student s2 = {
        "Matt", 
        "R04891565", 
        1.9
    };

    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("GPA: %.1f\n\n", s1.gpa);

    printf("Name: %s\n", s2.name);
    printf("ID: %s\n", s2.id);
    printf("GPA: %.1f\n\n", s2.gpa);

    if (s1.gpa < 2.0){
        printf("%s needs to improve their gpa.\n", s1.name);
    }
    if (s2.gpa < 2.0){
        printf("%s needs to improve their gpa.\n", s2.name);
    }

    return 0;
}