#ifndef SEQQUEUE_H
#define SEQQUEUE_H

template <class T>
class SeqQueue{
private:
    T* array;
    int max;
    int head;
    int rear;

public:
    SeqQueue(int max);
    ~SeqQueue();
    bool getFront(T &x);
    bool EnQueue(T &x);
    bool DeQueue(T &x);
    bool isEmpty();
    bool isFull();
    void makeEmpty();
};

#endif