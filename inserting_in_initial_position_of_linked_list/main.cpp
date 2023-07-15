//
//  main.cpp
//  inserting_in_initial_position_of_linked_list
//
//  Created by Uby H on 15/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*first=NULL;
void create(int A[], int n)
{
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insert(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=first;
    first=t;
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int n,x;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the linked list : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"The entered array is given by : "<<endl;
    cout<<endl;
    create(A,n);
    display(first);
    cout<<endl;
    cout<<"Enter the element to be entered before first position : "<<endl;
    cout<<endl;
    cin>>x;
    insert(x);
    cout<<"The updated array is given by : "<<endl;
    display(first);
    cout<<endl;
    return 0;
}
