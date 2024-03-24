#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
void insertNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    char choice;

    do {
        int value;
        cout << "Enter value to insert into the list: ";
        cin >> value;
        insertNode(head, value);

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Linked List: ";
    displayList(head);

    return 0;
}
