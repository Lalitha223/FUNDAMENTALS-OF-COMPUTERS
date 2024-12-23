#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
	struct node *head;

void insert(int,int);
void print();
int del(int);
void traverse();
void count();
void search();
void reverse();
void main()
{
	char con;
	int ch,n,i,x,pos,pos1;
	head=NULL;
	do
	{
		printf("enter your choice\n");
		printf("1.insertion
		2.deletion
		3.print
		4.traversal
		5.count
		6.serach
		7.clear
		8.exit\n");
		scanf("%d\n",&ch);
		switch(ch)
{
		
	case 1: //insertion
		printf("how many nodes wish to create\n");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			printf("enter the data and position of node to insert\n");
			scanf("%d%d", &x , &pos);
			insert(x,pos);
			print();
		}
		break;
		case 2: //printing
		if(head==NULL)
		{
		printf("list is empty");
		break;
	}
	
	else
	{
		print();
		break;
	}
		case 3: //delete
			if(head==NULL)
		{
		printf("list is empty\n");
		break;
    	}
	else
	{
			printf("enter the data and position of node to insert\n");
			scanf("%d" ,&pos1);
			del (pos);
			print();
			break;
		}
		case 4: //traversal
			if(head==NULL)
		{
		printf("list is empty\n");
		break;
    	}
	else
	{
		print();
		break;
	}
	case 5: //counting
		count();
		break;
		case 6://search
			search();
			break;
			case 7:
				reverse();
				break;
				case 8: 
					break;
					case 9:
						exit(1);
				}
				printf("do you want to do that again(y/n)");
				fflush(stdin);
				scanf("%c",&con);
			}while(con!='n');
			getch();
		}
		void insert(int data, int n)
		{
			int i;
			struct node *temp1=(struct node*)malloc(sizeof(struct node));
			struct node *temp2=head;
			temp1->data=data;
			temp1->next=NULL;
			if(n==1)
			{
				temp1->next=head;
				head=temp1;
				return;
			}
			for(i=0;i<n-2;i++)
			{
				temp2=temp2->next;
			}
			temp1->next=temp2->next;
			temp2->next=temp1;
		}
		void print()
		{
			struct node *temp=head;
			printf("list is empty\n");
			while(temp!=NULL)
			{
				printf("%d\n",temp->data);
				temp=temp->next;
			}
		}
		int del(int n)
		{
			int i;
			struct node *temp1=head;
			struct node *temp2;
			if(n==1)
			{
				head=temp1->next;
				free(temp1);
				return 1;
			}
			else{
					for(i=0;i<n-2;i++)
				{
					temp2=temp1->next;
					temp1->next=temp2->next;
					free(temp2);
					return 1;
				}
			}
		}
		void traverse()
		{
			struct node *temp;
			temp=head;
			while(temp!=NULL)
			{
				temp=temp->next;
			}
		}
		void search()
		{
			struct node *temp1;
			int key,pos;
			pos=1;
			printf("enter search element\n");
			scanf("%d",&key);
			temp1=head;
			while(temp1)
			{
				if(temp1->data=key)
				break;
				temp1=temp1->next;
				pos++;
			}
			if(temp1=NULL)
			printf("not found");
			else
			printf("element %d is found at position %d\n", key, pos);
		}
		void count()
		{
			struct node *temp1;
			int c=0;
			temp1=head;
			while(temp1)
			{
				c++;
				temp1=temp1->next;
			}
			printf("no of nodes=%d\n",c);
		}
		void reverse()
		{
			struct node *current, *prev,*next;
			current=head;
			printf("%d", current);
			prev=NULL;
			while(current!=NULL)
			{
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
			}
			head=prev;
			print();
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
				
