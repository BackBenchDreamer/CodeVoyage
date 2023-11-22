//singly linked lists
//a small program to store Name, Age and USN of 10 Students
//self study - inserting element in between the L.L.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct node {
    char name[30];
    int age;
    char usn[11];
    struct node *next;
};

struct node *head = NULL;

void addFront(char name[], int age, char usn[]){
    if (head != NULL) {
        struct node *newNode = (struct node*) malloc(sizeof(struct node)); //creating new node

        newNode = head;

        head-> age = age;
        strcpy(head->name, name);
        strcpy(head->usn , usn);
        head->next = newNode;

    }

    else {
        strcpy(head->name , name);
        strcpy(head->usn , usn);
        head->age = age;
        head->next = NULL;
    }
}

void display(){
    struct node **ptr = head;
    int count = 1;
    while((*ptr) != NULL){

        //printing the student details
        printf("\n Student %d, Address - %p details - ", &count, *ptr);
        printf("\n\tName: %s", (*ptr)->name);
        printf("\n\tAge: %d", &(*ptr)->age);
        printf("\n\tUSN: %s", (*ptr)->usn);

        //updating the ptr locations
        *ptr = *ptr -> next;
    }

}

void main(){
        head = (struct node*) malloc(sizeof(struct node));
        while(true){
            abc:;
            int choice = 0;

            printf("\n1.Insertion of data in front of linked list ");
            printf("\n2.Display the stack");
            printf("\n0.Quit");
            printf("\nEnter your choice");
            scanf("%d", &choice);

            if(choice == 0)
                break;

            else if(choice == 1)
                while(true){
                    //declaring the variables for insertion
                    char nmm[30];
                    char uuu[11];
                    int ajji;

                    printf("\nEnter the student's name: " );
                    scanf("%s", nmm);
                    printf("\nEnter the student's USN: " );
                    scanf("%s", uuu);
                    printf("\nEnter the student's age: " );
                    scanf("%s", &ajji);

                    //calling the function to add elements into linked list
                    addFront(nmm,ajji,uuu);

                    printf("\nWould you like to continue? [No(0) / Yes(1)]");
                    int minorChoice;
                    scanf("%d", &minorChoice);
                    if(minorChoice == 0)
                        goto abc;
                    else if (minorChoice != 1)
                        printf("\nInvalid Input, continuing the program");

                } 

                else if (choice == 2) 
                    display();

                else
                    printf("\nInvalid Input, continuing the program");
            

        }

}
        