#include "q1_linkedlist.h"

class Dequeue
{   LinkedList dq;
    // Implement dequeue using linked list.
    Dequeue();
    void push_back(int num)
    {
        // Insert element at the back of the dequeue.
        dq.insert_at_end(num);
    }
    void push_front(int num)
    {
        // Insert element at the front of the dequeue.
        dq.insert_at_start(num);
    }
    void pop_back()
    {
        // Remove the element from the back of the dequeue.
        dq.remove_from_end();
    }
    void pop_front()
    {
        // Remove the element from the front of the dequeue.
        dq.remove_from_start();
    }
    int front()
    {
        // Return the front element of the queue.
        return dq.front();
    }
    int back()
    {
        // Return the back element of the queue.
        return dq.last();
    }
};