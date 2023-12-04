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

//--------------------------------------------------------------------------------------------------------------
void entDetails(char *name, char *usn, int *age){
    printf("\nEnter the student's name: " );
    scanf("%s", *name);
    printf("\nEnter the student's USN: " );
    scanf("%s", *usn);
    printf("\nEnter the student's age: " );
    scanf("%s", *age);
}

//--------------------------------------------------------------------------------------------------------------

void addFront(char name1[], int age1, char usn1[]){
    if (head != NULL) {
        struct node *newNode = (struct node*) malloc(sizeof(struct node)); //creating new node

        newNode = head;

        head-> age = age1;
        strcpy(head->name, name1);
        strcpy(head->usn , usn1);
        head->next = newNode;

    }

    else {
        strcpy(head->name , name1);
        strcpy(head->usn , usn1);
        head->age = age1;
        head->next = NULL;
    }
}

//------------------------------------------------------------------------------------------------------------------

void addLast(){
    struct node *newNode = head;
    while(true){
            int choice = 0;
            printf("Enter Name: ");
            scanf();
    }
}

//-----------------------------------------------------------------------------------------------------------------

void display(){
    struct node *ptr = head;
    int count = 1;
    while (ptr -> next != NULL) {

        //printing the student details
        printf("\n Student %d, Address - %p details - ", &count, *ptr);
        printf("\n\tName: %s", (ptr)->name);
        printf("\n\tAge: %d", &(ptr)->age);
        printf("\n\tUSN: %s", (ptr)->usn);

        //updating the ptr locations
        ptr = ptr -> next;
    }
    free(ptr);

}

//------------------------------------------------------------------------------------------------------------

void deleteElem(int num){
    struct node *ptr = head;
    while (ptr){

    }

}

//-------------------------------------------------------------------------------------------------------------------

void main(){
    head = (struct node*) malloc(sizeof(struct node));
    while(true){
        int choice = -1;

        printf("\n1.Insertion of data in front of linked list ");
        printf("\n2.Display the stack");
        printf("\n0.Quit");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0: 
            goto endd;
            break;

        case 1:
            while (true){
                entDetails();
            }

        
        default:
            break;
        }
    }

}
        