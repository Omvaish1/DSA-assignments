//OM VAISH
//SID- 21105087

//[Ans.1]
//A basic circular linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//Function to insert a node at end on linked list
void append(Node*&head,int data){
    Node*temp=head;
    Node*new_node=new Node(data);
    if(temp==NULL){head=new_node;new_node->next=head;return;}
    while(temp->next!=head){temp=temp->next;}   
    //Above condition establishes that the traversing element has reached the first element
    temp->next=new_node;
    new_node->next=head;
}
//Function to print elements of linked list from head to the last node.
void pfun(Node*&head){
    Node*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
    Node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    pfun(head);
}

//while(temp->next!=head){temp=temp->next;} is the line that establishes that the traversing element/variable has reached the first element.


/*[Question.2]  What are the practical applications of a circular linked list? (Try to find applications in your respective fields).
Practical applications of circular linked list are :

1)Circular linked list is used is our Personal Computers, where multiple applications are running.

2)Circular Linked List can also be used to create Circular Queue.

3)Multiplayer games use a circular list to swap between players in a loop.

4)Circular linked lists are used in Round Robin Scheduling

5)Implementation of Advanced data structures like Fibonacci Heap

6)Undo functionality in Photoshop or Word use circular linked list

7)Data structures such as stacks and queues are implemented with the help of the circular linked lists.

*/



