#ifndef LINKEDLIST_H
#define LINKEDLIST_H
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
class LinkedList{
private:
    LinkNode<T> *first;
public:
    LinkedList();
    LinkedList(LinkedList &L);
    ~LinkedList();
    int length();
    int search(T &x);
    bool getData(int i, T &x);
    bool setData(int i, T &x);
    bool insert(int i, T &x);
    bool remove(int i, T &x);
    bool isEmpty();
    void makeEmpty();
    void output();
};

#endif