#include<stdio.h>
#include<stdlib.h>
struct link *AppendNode(struct link *head);
void DisplyNode(struct limk *head);
void DeleteMemory(struct link *head);
struct link
{
	int data;
	struct link *next;
};
int main()
{
	int i = 0;
	char c;
	struct link *head = NULL;
	printf("Do you want to append a new node(Y/N)?");
	scanf("%c", &c);
	while ( c== 'y'||c == 'y')
	{
		head = AppendNode(head);
		DisplyNode(head);
		printf("Do you want to append a new node(Y/N)?");
		scanf("%c", &c);
		i++;
	}
	printf("%d newe nodes have been apended!\n",i);
	DeleteMemory(head);
}
struct link *AppendNode(struct link *head)
{
	struct link *p = NULL, *pr = head;
	int data;
	p = (struct link *)malloc(sizeof(struct link));
	if (p == NULL)
	{
		printf("No enough memory to allocate!\n");
		exit(0);
	}
	if (head == NULL)
	{
		head = p;
	}
	else
	{
		while (pr->next !=NULL)
		{
			pr = pr->next;
		}
		pr->next = p;
	}
	printf("Input node data:");
	scanf("%d", &data);
	p->data = data;
	p->next = NULL;
	return head;
	}
	void DisplyNode(struct link *head)
	{
		struct link *p = head;
		int j = 1;
		while (p != NULL)
		{
			printf("%5d%10d\n", j, p->data);
			p = p->next
			j++;
		}
	}
	void DeleteeeMemory(struct link *head£©
	{
	struct link *p = head, *pr = NULL£»
	while (p != NULL)
	{
	pr = p;
	p = p->next;
	frree(pr);
}
}
	 
	
