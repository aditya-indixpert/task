#include <stdio.h>

int main() {
    int choice,contact,id ,age,number;
    char name ;
    
  printf("press 1 creat account\n");
  printf("press 2 deposite\n");
  printf("press 3 for withdraw\n");
  printf("enter 4 for check balance\n");
  printf("enter 5 for exit");

  scanf("%s",&choice);
  switch (choice){
      case 1:
      printf("creat account");
       printf("\nenter your name\n: ");
        scanf("%d", &name);

        printf("enter your number\n: ");
        scanf(" %c", &contact); 

        printf("Enter Age\n: ");
        scanf("%d", &age);

        printf("Enter account Number\n: ");
        scanf(" %d", &number);

        printf("enter \n: ");
        scanf(" %c", &id );

       
        printf("\n Student Registered Successfully\n");
        printf("name: %d\n", name);
        printf("contact: %c\n",contact);
        printf("Age: %d\n", age);
        printf("number: %d\n",number);
        printf("id: %c\n",id);

      break;
      case 2:
      printf("deposite");
      break;
      case 3:
      printf("withdraw");
      case 4:
      printf("check balance");
      case 5:
      printf("exit");
      break;
      
  }
    return 0;
}



