#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

template<class T>
struct LinkNode
{
    T data;
    LinkNode<T> *next = NULL;
};

template<class T>
class LinkedQueue{
private:
    LinkNode<T> *rear;
    LinkNode<T> *head;
public:
    LinkedQueue();
    ~LinkedQueue();
    bool getFront(T &x);
    bool EnQueue(T &x);
    bool DeQueue(T &x);
    bool isEmpty();
    void makeEmpty();
};

#endif