#include <iostream>

using namespace std;

struct node

{

    int data;

    struct node* next,*prev;

};

int n, cnt=0;

struct node *first, *temp, *p;

void create()

{

    int ch;

    first=new node;

    cout<<"\n\t ENTER DATA : ";

    cin>>n;

    first->data=n;

    first->next=0;

    first->prev=0;

    cnt=1;

}

void insertfirst()

{

    p=new node;

    cout<<"\n\t ENTER DATA FOR 1ST NODE";

    cin>>n;

    p->data=n;

    p->next=first;

    p->prev=0;

    first->prev=p;

    first=p;

    cnt++;

    cout<<"\tELEMENT SUCCESSFULLY ADDED";

}

void insertlast()

{

    p=new node;

    cout<<"\n\t ENTER DATA FOR LAST NODE";

    cin>>n;

    p->data=n;

    temp=first;

    while(temp->next!=0)

    {

        temp=temp->next;

    }

    temp->next=p;

    p->next=0;

    p->prev=temp;

    cnt++;

    cout<<"\tELEMENT SUCCESSFULLY ADDED";

}

void insertafter()

{

    int add,t;

    cout<<"\n\t ENTER ANY ADDRESS BETWEEN 1 and "<<cnt;

    cin>>add;

    t=1;

    p=first;

    while(t!=add) 

    {

        p=p->next;

        t++;

    }

    temp=new node;

    cout<<"\n\t ENTER DATA FOR NODE";

    cin>>n;

    temp->data=n;

    temp->next=p->next;

    temp->prev=p;

    p->next=temp;

    cnt++;

    cout<<"\tELEMENT SUCCESSFULLY ADDED";

}

void deletefirst()

{

    p=first;

    first=p->next;

    first->prev=0;

    free(p);

    cnt--;

    cout<<"\t ELEMENT SUCCESSFULLY DELETED";

}

void deletelast()

{

    p=first;

    while(p->next->next!=0)

    {

        p=p->next;

    }

    p->next=0;

    free(p->next);

    cnt--;

    cout<<"\tELEMENT SUCCESSFULLY DELETED";

}

void deleteafter()

{

    int add,t;

    cout<<"\n\t ENTER ANY ADDRESS BETWEEN 1 and"<<cnt;

    cin>>add;

    t=1;

    p=first;

    while(t<add)

    {

        p=p->next;

        t++;

    }

    temp=p->next;

    p->next=temp->next;

    temp->next->prev=p;

    free(temp);

    cnt--;

    cout<<"\tELEMENT SUCCESSFULLY DELETED";

}

void display()

{

    p=first;

    while(p!=0)

    {

        cout<<"\n\t"<<p->data;

        p=p->next;

    }

    cout<<"\nTotal no. of Nodes present in a list:"<<cnt;

}

int main()

{

    int i;

    while(1)

    {

        cout<<"1.Create\t 2.Insert first 3. ...9.exit\n";

        cout<<"Enter Your Choice";

        cin>>i;

        switch(i)

        {

            case 1:

                create();

                break;

            case 2:

                insertfirst();

                break;

            case 3:

                insertlast();

                break;

            case 4:

                insertafter();

                break;

            case 5:

                deletefirst();

                break;

            case 6:

                deletelast();

                break;

            case 7:

                deleteafter();

                break;

            case 8:

                display();

                break;

            default:

                exit(0);

        }

    }

return 0;

}
