#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* traverse()
{
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
head = (struct node*)malloc(sizeof(struct node)); 
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));

	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	 
	return head;
	
}
main()
{
node* n=traverse();

while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
}