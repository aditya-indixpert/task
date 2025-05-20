#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char contact[15];
    char class_name[20];
};

int main() {
    struct Student s;
    int choice;

    printf("Student Registration\n");
    printf("Press 1 for register \n");
    printf("press 2 for records \n");
    printf("press 3 for exit\n");
    printf("Enter your choice\n: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter Student ID: ");
        scanf("%d", &s.id);

        printf("Enter Student Name: ");
        scanf(" %[^\n]", s.name); 

        printf("Enter Age: ");
        scanf("%d", &s.age);

        printf("Enter Contact Number: ");
        scanf(" %[^\n]", s.contact);

        printf("Enter Class: ");
        scanf(" %[^\n]", s.class_name);

       
        printf("\n you Registered Successfully \n");
        printf("ID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("Age: %d\n", s.age);
        printf("Contact: %s\n", s.contact);
        printf("Class: %s\n", s.class_name);
    } else if(choice == 2) {
        printf("student records.\n");
         printf("\n--- Student Registered Successfully ---\n");
        printf("ID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("Age: %d\n", s.age);
        printf("Contact: %s\n", s.contact);
        printf("Class: %s\n", s.class_name);
       } else{
           printf("you are exit");}
           return 0;
}