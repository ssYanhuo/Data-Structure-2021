#ifndef SEQQUEUE_CPP
#define SEQQUEUE_CPP

#include<iostream>
#include"SeqQueue.h"

using namespace std;

template<class T>
SeqQueue<T>::SeqQueue(int max){
    this -> array = new T[max];
    this -> head = 0;
    this -> rear = 0;
    this -> max = max;
}

template<class T>
SeqQueue<T>::~SeqQueue(){
    delete [] this -> array;
}

template<class T>
bool SeqQueue<T>::getFront(T &x){
    int position = head;
    if(rear == head){
        cerr << "Error: Illegal index." << endl;
        return false;
    }
    x = this -> array[position];
    return true;
}

template<class T>
bool SeqQueue<T>::EnQueue(T &x){
    int position = rear % max;
    if((this -> rear % max) == ((this -> head - 1) % max < 0 ? 
        (this -> head - 1) % max + max : (this -> head - 1) % max)){
        return false;
    }
    this -> array[position] = x;
    this -> rear = (rear + 1) % max;
    return true;
}

template<class T>
bool SeqQueue<T>::DeQueue(T &x){
    int position = head % max;
    if(this -> rear % max == this -> head % max){
        return false;
    }
    x = this -> array[position];
    this -> head = (head + 1) % max;
    return true;
}


template<class T>
bool SeqQueue<T>::isEmpty(){
    return this -> rear % max == this -> head % max;
}

template<class T>
bool SeqQueue<T>::isFull(){
    return (this -> rear % max) == ((this -> head - 1) % max < 0 ? 
        (this -> head - 1) % max + max : (this -> head - 1) % max);
}

template<class T>
void SeqQueue<T>::makeEmpty(){
    this -> head = this -> rear = 0;
}

#endif