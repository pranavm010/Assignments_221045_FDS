/*Pranav Mandare
VIIT college Pune.*/


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create()
{
    struct node *t,*nn;
    nn=new node();
    cin>>nn->data;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=nn;
    }
}

void insert_beg()
{
    struct node *nn;
   // t=head;
    nn=new node();
    cout<<"Enter the data to insert at beginning:";
    cin>>nn->data;
    nn->next=NULL;
    nn->next=head;
    head=nn;
    cout<<endl;
}

void insert_pos()
{
    int pos;
    struct node *nn,*t1,*t2;
    nn=new node;
    t1=t2=head;
    cout<<"Enter position to insert data:"<<endl;
    cin>>pos;
    cout<<"Enter the data to be insert:"<<endl;
    cin>>nn->data;
    nn->next=NULL;
    for(int j=1;j<pos;j++)
    {
        t2=t1;
        t1=t1->next;
    }
    t2->next=nn;
    nn->next=t1;
}

void insert_end()
{
    struct node *nn,*t;
    nn=new node;
    t=head;
    cout<<"Enter the data to insert at end:"<<endl;
    cin>>nn->data;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    nn->next=NULL;
    t->next=nn;
}

void delete_beg()
{
    struct node *t;
    t=head;
    head=t->next;
    t->next=NULL;
    delete(t);
}
void delete_end()
{
    struct node *t,*k;
    t=head;
    while(t->next!=NULL)
    {
        k=t;
        t=t->next;
    }
    k->next=NULL;
    delete(t);
    cout<<"Last node is deleted."<<endl;
}

void delete_pos()
{
    struct node *t1,*t2;
    t1=t2=head;
    int p;
    cout<<"Enter the node position to be deleted:"<<endl;
    cin>>p;
    for(int i=1;i<p;i++)
    {
        t1=t2;
        t2=t2->next;
    }
    t1->next=t2->next;
    t2->next=NULL;
    delete(t2);
    cout<<"Node deleted."<<endl;
}
void display()
{
    struct node *t;
    t=head;
    cout<<"Your created Linked list is:"<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<"\t";
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    int number;
    cout<<"How many nodes you want to create ?";
    cin>>number;
    cout<<"Enter data:"<<endl;
    for(int i=0;i<number;i++)
    {
        create();
    }
    display();
    insert_beg();
    display();
    insert_pos();
    display();
    insert_end();
    display();
    delete_beg();
    display();
    delete_end();
    display();
    delete_pos();
    display();
    return 0;
}
