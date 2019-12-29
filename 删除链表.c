#include<stdio.h>
main()
{
	int a;
	printf("%c\n");
}
struct link *DeleteNode(struct link *head, int nodeData)
{
	struct link *p = head, *pr = head;
	if (head == NULL)
	{
		printf("Linked Table is emoty! \n");
		return(head);
	}
	while (nodeData != p ->data && p->next != NULL)
	{
		pt = p;
		p = p->next;
	}
	if (nodeData = p->data)
	{
		if(p = head)
		{
			head=p->next;
		}
		else
		{
			pr->next = p->next;
		}
		free(p);
	}
	else
	{
		printf("This Node has not been found! \n");
	 } 
	 return head;
}
