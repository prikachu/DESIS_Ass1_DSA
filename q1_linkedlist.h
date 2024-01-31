#include "node.h"
#include <iostream>
using namespace std;

class LinkedList
{
    node *head = nullptr;
    node *tail = nullptr;

public:
    // Implement singly linked list with following functions.
    LinkedList()
    {
    }
    void insert_at_start(int num)
    {
        node *temp = new node(num);
        // Insert the element at the start of the list.
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
            return;
        }
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    void remove_from_start()
    {
        // Remove the element from the start of the list.
        if (head == nullptr)
            return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }
        node *temp = head->next;
        temp->prev = nullptr;
        delete head;
        head = temp;
    }
    void insert_at_end(int num)
    {
        // Insert the element at the end of the list.
        node *temp = new node(num);
        // Insert the element at the start of the list.
        if (tail == nullptr)
        {
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    void remove_from_end()
    {
        // Remove the element from the end of the list.
        if (tail == nullptr)
            return;
        if (tail->prev == nullptr)
        {
            delete tail;
            head = nullptr;
            tail = nullptr;
            return;
        }
        tail->prev->next = nullptr;
        node *temp = tail->prev;
        delete tail;
        tail = temp;
    }
    int front()
    {
        // Return the first element of the list.
        if (head == nullptr)
            return -1;
        return head->val;
    }
    int last()
    {
        // Return the last element of the list.
        if (tail == nullptr)
            return -1;
        return tail->val;
    }
    void traverse()
    {
        // Print all the elements from start to the end of the list.
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << ' ';
            temp = temp->next;
        }
    }
    ~LinkedList()
    {
        while (head)
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};
