//Write a program to create linked list and following functionality a.Insert node at beginning b. delete node at end.
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node*next;
};
Node*head= NULL;
void insertAtBeginning(int data) {
    Node*newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void deleteAtEnd() {
    if (head==NULL) {
        cout<<"List is empty."<<endl;
        return;
    }
    Node*current = head;
    Node*previous = NULL;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    if (previous == NULL) {
        head = NULL;
    } else {
        previous->next = NULL;
    }
    delete current;
}
void printList() {
    Node*current = head;
    while (current != NULL) {
        cout << current->data << "";
        current = current->next;
    }
    cout << endl;
}
int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    printList();

    deleteAtEnd();
    printList();

    return 0;
}