#include<stdio.h>
#include<stdlib.h>


struct node {
	int data;
	struct node *next;
};

struct node* head = NULL;

struct node* cnode(){
	struct node* temp = (struct node*) malloc (sizeof(struct node));
	return temp;
}

void enq(int data){
	if (head == NULL){
		head = cnode();
		head -> data = data;
		head -> next = head;
	}
	else 
	{
		struct node* NN = cnode();
		struct node* temp = head;
		while(temp -> next != head){
			temp = temp -> next;
		}
		
		temp -> next = NN;
		NN -> data = data;
		NN -> next = head;
	}
}

int deq (int data){
	if (head == NULL){
		printf("\nThe Circular List is empty");
	}
	else 
	{
		struct node* temp = head;
		while(temp -> next != head){
			if(temp->next->data == data){
				temp-> next = temp->next->next;
				printf("\nSucessfully Removed the Element");
				return 0;
			}
			temp = temp -> next;
		}
		printf("\nElement not found");
		return 0;
	}
}

void display(){
	if (head == NULL){
		printf("\nThe Circular List is empty");
	}
	else 
	{
		struct node* temp = head;
		while(temp -> next != head){
			printf("\n%d", temp -> data);
			temp = temp -> next;
		}
		printf("\n%d", temp -> data);
	}
}
	
void main(){
	int flag = 1;
	while(flag){
		printf("\n--------------------------------------------------");
		printf ("\n1.Enqueue\n2.Dequeue\n3.Display\nEnter Your Choice");
		int ch = 0, n;
		scanf ("%d", &ch);
		switch(ch){
		case 1: printf ("\nEnter Element to be inserted: ");
				scanf("%d", &n);
				enq(n);
				break;
		case 2: printf ("\nEnter Element to be removed (first occurance): ");
				scanf("%d", &n);
				int n = deq(n);
				break;
		case 3: display();
				break;
		default: flag =0;  
		}
	}
}

 
