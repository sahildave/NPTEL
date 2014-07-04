#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void printList(struct node *n){
	while(n!=NULL){
		printf("%d\n", n->data);
		n = n->next;
	}
}

void addToFront(struct node *input, struct node *root){
	input->next = root->next;
	root->next=input;
}

void addToLast(struct node *input, struct node *root){
	struct node *temp = root;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = input;
}

void addAt(struct node *input, struct node *after){
	input->next = after->next;
	after->next=input;

}

void deleteNode(struct node *input, struct node *root){

	struct node *prev = root;
	struct node *temp = root->next;
	
	if(temp==NULL){
		printf("\nINVALID LL\n");
		return;
	}
	
	while(temp!=NULL){
		
		if(temp->data == input->data){
			prev->next = input->next;
			temp->next = NULL;
			free(temp);
		}
		prev=temp;
		temp=temp->next;
	}
	

}

int main(){

	struct node *root = (struct node *) malloc(sizeof(struct node));
	struct node *first = (struct node *) malloc(sizeof(struct node));
	
	root->next = first;
	
	first->next = NULL;
	first->data = 10;
	printf("First List\n");
	printList(root->next);
	
	struct node *second = (struct node *) malloc(sizeof(struct node));
	second->data = 5;
	addToFront(second, root);
	printf("Second List\n");
	printList(root->next);
	
	struct node *third = (struct node *) malloc(sizeof(struct node));
	third->data = 15;
	addToLast(third, root);
	printf("Third List\n");
	printList(root->next);
	
	struct node *mid = (struct node *) malloc(sizeof(struct node));
	mid->data = 12;
	addAt(mid, first);
	printf("Fourth List\n");
	printList(root->next);
	
	struct node *mid2 = (struct node *) malloc(sizeof(struct node));
	mid2->data = 14;
	addAt(mid2, mid);
	printf("Fifth List\n");
	printList(root->next);
	
	deleteNode(mid2, root);
	printf("Sixth List\n");
	printList(root->next);
	
	return 0;
}
