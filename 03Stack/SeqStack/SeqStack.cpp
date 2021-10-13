#ifndef SEQSTACK_CPP
#define SEQSTACK_CPP

#include<iostream>
#include"SeqStack.h"
using namespace std;

template<class T>
SeqStack<T>::SeqStack(int max){
    this -> array = new T[max];
    this -> top = -1;
    this -> max = max;
}

template<class T>
SeqStack<T>::~SeqStack(){
    delete [] this -> array;
}

template<class T>
bool SeqStack<T>::getTop(T &x){
    int position = top;
    if(position < 0){
        cerr << "Error: Illegal index." << endl;
        return false;
    }
    x = this -> array[position];
    return true;
}

template<class T>
bool SeqStack<T>::push(T &x){
    int position = top + 1;
    if(this -> max == this -> top + 1){
        return false;
    }
    if(position > this -> top + 1){
        return false;
    }
    if(position < 0){
        return false;
    }
    for(int i = this -> top; i >= position; i--){
        this -> array[i + 1] = this -> array[i];
    }
    this -> array[position] = x;
    this -> top++;
    return true;
}

template<class T>
bool SeqStack<T>::pop(T &x){
    int position = top;
    if(position > this -> top){
        return false;
    }
    if(position < 0){
        return false;
    }
    x = this -> array[position];
    for(int i = position; i < top; i++){
        this -> array[i] = this -> array[i + 1];
    }
    top--;
    return true;
}

template<class T>
bool SeqStack<T>::isEmpty(){
    return this -> top < 0;
}

template<class T>
bool SeqStack<T>::isFull(){
    return this -> top >= this -> max - 1;
}

template<class T>
void SeqStack<T>::makeEmpty(){
    for(int i = 0; i < this -> max; i++){
        this -> array[i] = 0;
    }
    this -> top = -1;
}

#endif