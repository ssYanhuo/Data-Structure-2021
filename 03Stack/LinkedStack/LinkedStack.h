#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#ifndef NULL
#define NULL 0
#endif

template<class T>
struct LinkNode
{
    T data;
    LinkNode<T> *next = NULL;
};

template<class T>
class LinkedStack{
private:
    LinkNode<T> *bottom;
    int top;
public:
    LinkedStack();
    ~LinkedStack();
    void output();
    bool getTop(T &x);
    bool push(T &x);
    bool pop(T &x);
    bool isEmpty();
    void makeEmpty();
};

#endif