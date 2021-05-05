#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};
typedef struct node node;
void Display(node *p);

int main(){
	
	node *head;
	node *one = NULL;
	node *two = NULL;
	node *three = NULL;
	
	one = malloc(sizeof(node));
	two = malloc(sizeof(node));
	three = malloc(sizeof(node));
	
	one->next = two;
	two->next = three;
	three->next = NULL;

	one->value = 1;
	two->value = 2;
	three->value = 3;
	
	head = one ;
	Display(head);
	return 0;
}
void Display(node *p)
{
	int count = 0 ;
	while(p != NULL)
	{
		printf("node %d : %d\n",count, p->value );
		p = p->next ;
		count ++;
	}
}

