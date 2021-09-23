#ifndef SEQLIST_H
#define SEQLIST_H

#include "SeqList.cpp"

template <class T>
class SeqList{
private:
    T* array;
    int max;
    int last;

public:
    SeqList(int max);
    SeqList(SeqList &L);
    ~SeqList();
    void output();
    bool insert(T &num, int position);
    bool remove(int position, T &x);
    int size();
    int length();
    int search(T item);
    T getData(int position, T &x);
    bool setData(int position, T &num);
    bool isEmpty();
    bool isFull();
    void makeEmpty();

};

#endif