#ifndef SEQSTACK_H
#define SEQSTACK_H

template <class T>
class SeqStack{
private:
    T* array;
    int max;
    int top;

public:
    SeqStack(int max);
    ~SeqStack();
    bool getTop(T &x);
    bool push(T &x);
    bool pop(T &x);
    bool isEmpty();
    bool isFull();
    void makeEmpty();
};

#endif