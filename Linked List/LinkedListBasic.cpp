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
    cout << endl;
}

void countNodes(struct node* node){
    int count = 0;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    cout << "Total number of nodes is: " << count << endl;
}

void sumNodes(struct node* node){
    int sum = 0;
    while (node != NULL) {
        sum += node->data;
        node = node->next;
    }
    cout << "Sum of data of all node is: " << sum << endl;
}

void maxNodes(struct node* node){
    int max = node->data;
    while (node != NULL) {
        if ((node->data) > max) {
            max = node->data;
        }
        node = node->next;
        
    }
    cout << "Max value from all nodes is: " << max << endl;
}

int searchNode(struct node* node, int target){
    int index = 0;
    while (node != NULL) {
        index++;
        if ((node->data) == target) {
            return index;
        }
        node = node->next;
    }
    return -1;
    
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

    countNodes(head);

    sumNodes(head);

    maxNodes(head);

    int target;
    cout << "Enter value to be found: ";
    cin >> target;
    int result = searchNode(head, target);
    cout << target << " is at node: " << result << endl;
    return 0;
}
