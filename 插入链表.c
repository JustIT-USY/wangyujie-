struct link *InsertNode(struct link *head, int nodeData)
{
	struct link * pr = head, *p = head, *temp = NULL;
	p = (struct link *)malloc(sizeof(struct link));
	if(p == NULL)
	{
		printf("No enough memory!\n");
		exit(0);
	}
	p->next = NULL;
	p->data = nodeData;
	if (head = NULL)
	{
		head = p;
	}
	else
	{
		while (pr->data < nodeData && pr->next != NULL)
		{
			temlp = pr;
			pr = pr->next;
		}
		if (pr->data >= nodeData)
		{
		    if (pr == head)
		    {
		    	p->next = head;
		    	head = p;
			}
			else
			{
				pr = temp;
				p->next = pr->next;
				pr->next = p;
			}
		}
		else
		{
			pr->nezt = p;
		}
	}
	return head;
}
