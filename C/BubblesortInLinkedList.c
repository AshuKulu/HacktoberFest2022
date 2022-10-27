#include<stdio.h>
#include<Stdlib.h>

struct node
            {
               int data;
               struct node *next;
           };
struct node *head=NULL;

struct node* getnewnode(int val)
           { 
              struct node*temp;
              temp= (struct node*)malloc(sizeof(struct node));
              temp->data=val;
              temp->next=NULL;
              return temp;

            }

print()
            {
             struct node* run;
            run=head;
            while(run!=NULL)
            {
             printf("%d ",run->data);
            run=run->next;
            }
            printf("\n");
            }

insertbeg(int val)
            { 
             struct node *ptr;
            ptr=getnewnode(val);
            ptr->next=head;
            head=ptr;
            }
 void swap(struct node *prev,struct node *current)
             { 
              int temp;
             temp=prev->data;
             prev->data=current->data;
             current->data=temp;
             }
 
void sort()
            {
            int i,j;
            for(i=0;i<4;i++)
            {
             for(j=0;j<4-i-1;j++)
            {
            struct node *prev=head;
            struct node* current=prev->next;
            int i,j;
            while(current!=NULL)
            {
                        if(prev->data>current->data)
                        {
                         swap(prev,current);
                        }
                        prev=prev->next;
                        current=current->next;
            }
            }
            }
}

void main()
{
             insertbeg(140);
            insertbeg(81);
            insertbeg(-3);
            insertbeg(100);
            sort();
            print();

}
