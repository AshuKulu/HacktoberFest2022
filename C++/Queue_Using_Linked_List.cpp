#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
}; // self referencial Structure.

class Queue_Class
{
    Node *front = NULL; // for handing the front portion in the queue
    Node *rear = NULL;  // for handing the rear portiong in the queue.
    Node *ptr;

protected:
    bool isEmpty();
    void reset_Pos();
    bool isFull(); // for checking whether the queue is full or not.

public:
    void Insert_in_the_queue();
    void Enqueue();
    void Dequeue();
    void display();
};

void Queue_Class ::Dequeue()
{
    Node *del_node = new Node;
    if (isEmpty())
    {
        cout << "Queue is Empty !!!!!!" << endl;
    }
    else
    {
        del_node = front;
        front = front->next;
        cout << "The Removed Element is :- " << del_node->data << endl;
        delete del_node;
    }
}

void Queue_Class::Enqueue()
{
    int element;
    Node *enqueue_Node = new Node;
    // Node *enqueue_Node= (Node*)malloc(sizeof(Node)); // for allocating the memory in the C Language.
    // (Node*) here in the first is used for typecasting the given datatype into the (Node*) user defined datatype.
    cout << "Enter the data for adding in the node: ";
    cin >> element;
    enqueue_Node->data = element;
    enqueue_Node->next = NULL;
    if (isEmpty())
    {
        front = rear = enqueue_Node;
    }
    else
    {
        rear->next = enqueue_Node;
        rear = enqueue_Node;
    }
}

void Queue_Class::reset_Pos()
{
    ptr = front;
}

void Queue_Class::Insert_in_the_queue()
{
    int element;
    char ch = 'y';
    int count = 0;
    while (ch == 'y' || ch == 'Y')
    {
        Node *currentNode = new Node;
        cout << "Enter the data in the node " << count + 1 << " : ";
        cin >> element;
        currentNode->data = element;
        currentNode->next = NULL;
        if (isEmpty())
        {
            front = rear = currentNode;
        }
        else
        {
            rear->next = currentNode;
            rear = currentNode;
        }
        count++;
        cout << "Do you want to enter More? (y/n) : ";
        cin >> ch;
    }
}

void Queue_Class::display()
{
    reset_Pos();
    if (isEmpty())
    {
        cout << "Queue is Empty !!!!!!!!!!!";
    }
    else
    {
        cout << "The elements present in the queue is: ";
        while (ptr != rear->next)
        {
            cout << ptr->data;
            if (ptr == rear)
            {
                cout << " ";
            }
            else
            {
                cout << ",";
            }
            ptr = ptr->next;
        }
    }
    cout << endl;
}

bool Queue_Class::isEmpty()
{
    if (front == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    Queue_Class operations;
    do
    {
        cout << "1. Insertion in the Queue" << endl;
        cout << "2. Display the Queue" << endl;
        cout << "3. Perform the enque Operation" << endl;
        cout << "4. Perform the dequeue Operation" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            operations.Insert_in_the_queue();
            break;
        }
        case 2:
        {
            operations.display();
            break;
        }
        case 3:
        {
            operations.Enqueue();
            break;
        }
        case 4:
        {
            operations.Dequeue();
            break;
        }
        case 5:
        {

            break;
        }

        default:
        {
            cout << "Wrong Choice!!!!!!!!!!!!!!!!!";
            break;
        }
        }
    } while (choice != 5);

    return 0;
}