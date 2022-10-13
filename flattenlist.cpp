#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* down;
 
    Node(int data)
    {
        this->data = data;
        this->next = this->down = nullptr;
    }
};

void printOriginalList(Node* head)
{
    if (head == nullptr) {
        return;
    }
 
    cout << ' ' << head->data << ' ';
 
    if (head->down)
    {
        cout << "[";
        printOriginalList(head->down);
        cout << "]";
    }
 
    printOriginalList(head->next);
}

void printFlatenedList(Node* head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
 
    cout << "null" << '\n';
}

Node* flattenList(Node* head)
{
    if (head == nullptr) {
        return nullptr;
    }
    Node* next = head->next;
    head->next = flattenList(head->down);

    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
    }
    tail->next = flattenList(next);
    return head;
}
 
int main()
{
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    Node* nine = new Node(9);
    Node* ten = new Node(10);
    Node* eleven = new Node(11);
    Node* twelve = new Node(12);
    Node* thirteen = new Node(13);
    Node* fourteen = new Node(14);
    Node* fifteen = new Node(15);

    Node* head = one;

    one->next = four;
    four->next = fourteen;
    fourteen->next = fifteen;
    five->next = nine;
    nine->next = ten;
    seven->next = eight;
    eleven->next = thirteen;

    one->down = two;
    two->down = three;
    four->down = five;
    five->down = six;
    six->down = seven;
    ten->down = eleven;
    eleven->down = twelve;
 
    cout << "The original list is :" << '\n';
    printOriginalList(head);
 
    head = flattenList(head);
    cout << "\n\nThe flattened list is :" << '\n';
    printFlatenedList(head);
 
    return 0;
}