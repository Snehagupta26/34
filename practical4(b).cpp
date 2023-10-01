#include <iostream>
using namespace std;

// Circular Linked List Node
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Circular Linked List Class
class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            newNode->next = head; // Make it point to itself to form a circle
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteAtBeginning() {
        if (!head) return;
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            temp->next = head->next;
            delete head;
            head = temp->next;
        }
    }

    void deleteAtEnd() {
        if (!head) return;
        Node* temp = head;
        Node* prev = nullptr;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        if (prev) {
            prev->next = head;
            delete temp;
        } else {
            delete head;
            head = nullptr;
        }
    }

    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtBeginning(3);
    cll.insertAtBeginning(2);
    cll.insertAtBeginning(1);

    cout << "Circular Linked List after inserting at beginning: ";
    cll.display();

    cll.insertAtEnd(4);
    cll.insertAtEnd(5);

    cout << "Circular Linked List after inserting at end: ";
    cll.display();

    cll.deleteAtBeginning();

    cout << "Circular Linked List after deleting from beginning: ";
    cll.display();

    cll.deleteAtEnd();

    cout << "Circular Linked List after deleting from end: ";
    cll.display();

    return 0;
}
