#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void display(struct node * node){
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main () {
    node* head = new node(5);
    node* second = new node(10);
    node* third = new node(15);
    node* fourth = new node(20);
    node* fifth = new node(25);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    display(head);
    return 0;
}