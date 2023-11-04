#include<iostream>

using namespace std;

struct node 

{

   int data ;

   struct node *next ;

};

int cnt=0,n;

struct node *first, *temp, *p ,*q;

void create ()

{

   int ch;

   struct node *first; 

   first = new node ;

   cout <<"\n\t ENTER DATA:";

   cin >>n;

   first->data =n;

   first->next =first ;

   cnt =1;

}

void insertfirst ()

{

   int n;

   p = new node;

   cout <<"\n\t ENTER DATA FOR 1ST NODE";

   cin >>n;

   p->data = n;

   p->next = first-> next ;

   first-> next= p;

   cnt ++;

   cout <<"\t ELEMENT SUCCESSFULLY ADDED";

}

void insertlast ()

{

   p=new node ;

   cout <<"\n\t ENTER DATA FOR LAST NODE";

   cin >>n;

   p->data =n;

   temp =first;

   while (temp->next!=first)

   {

       temp = temp->next ;

    }

    temp->next =p;

    p->next =first;

    cnt ++;

    cout <<"\t ELEMENT  SUCCESSFULLY  ADDED";

}

void insertafter ()

{

   int t,add;

   cout <<"\n\t ELEMENT ANY ADDRESS BETWEEN 1 and "<< cnt ;

   cin >>add ;

   t=1;

   p=first ;

   while (t!=add)//while (t!=add-1)Before 

   {

       p=p->next ;

       t++;

    }

    temp =new node ;

    cout <<"\n\t ENTER  DATA  FOR NODE";

    cin >>n;

    temp-> data =n;

    temp-> next =p-> next ;

    p-> next =temp ;

    cnt ++;

    cout <<"\t ELEMENT SUCCESSFULLY ADDED";

}

void deletefirst ()

{

   p=first ;

   q=first ;

   while (p->next!=first)

   {

       p=p->next;

    }

    first =q-> next ;

    p->next =first ;

   free (q);

   cnt--;

   cout<<"\t ELEMENT SUCCESSFULLY DELETED ";

}

void deletelast ()

{

   p=first;

   while (p->next->next!=first)

   {

      p=p->next ;

    }

    free(p->next); 

    p->next=first ;

    cnt-- ;

    cout <<"\t ELEMENT SUCCESSFULLY DELETED";

}

void deleteafter ()

{

    int add, t;

    cout <<"\n\t ENTER ANY ADDRESS BETWEEN 1 and "<<cnt ;

    cin >>add ;

    t=1;

    p=first ;

    while (t<add-1)

    {

       p=p->next;

       t++;

    }

    temp =p->next ;

    p->next =temp->next ;

    free (temp);

    cnt--;

    cout <<"\t ELEMENT SUCCESSFULLY DELETED";

}

void display ()

{

   p=first ;

   while (p->next!=first)

   {

       cout<<"\n\t"<<p->data ;

       p=p->next;

    }

    cout <<"\n Total no.of Nodes Present in a list:"<<cnt ;

}

int main ()

{

   int i ;

   while (1)

   {

       cout <<"1. create \t 2. insertfirst \t 3. insertlast \t 4. insertafter \t 5. deletefirst \t 6. deletelast \t 7. deleteafter \t 8. display \t 9. exit \n";

       cout <<"Enter Your Choice ";

       cin >>i ;

       switch (i)

       {

           case 1:

              create ();

              break ;

           case 2:

              insertfirst();

              break ;

           case 3:

              insertlast ();

              break ;

           case 4:

              insertafter ();

              break ;

           case 5:

              deletefirst ();

              break ;

           case 6:

              deletelast ();

              break ;

           case 7:

              deleteafter ();

              break;

           case 8:

              display ();

              break ;

           default:

              exit (0);

            }

      }

    return 0;

}
