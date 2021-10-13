#ifndef LINKEDQUEUE_CPP
#define LINKEDQUEUE_CPP

#include<iostream>
#include"LinkedQueue.h"

using namespace std;

template<class T>
LinkedQueue<T>::LinkedQueue(){
    rear = NULL;
    head = NULL;
}


template<class T>
LinkedQueue<T>::~LinkedQueue(){
    LinkNode<T> *p = head;
    while (p != NULL){
        head = head -> next;
        delete p;
        p = head;
    }
    rear = NULL;
}



template<class T>
bool LinkedQueue<T>::getFront(T &x){
    if(head == NULL){return false;}
    x = head -> data;
    return true;
}


template<class T>
bool LinkedQueue<T>::EnQueue(T &x){
    LinkNode<T> *p = new LinkNode<T>;
    if(p == NULL){return false;}
    p -> data = x;
    if(head == NULL && rear == NULL){
        rear = head = p;
    }
    else{
        rear -> next = p;
        rear = rear -> next;
    }
    return true;
}

template<class T>
bool LinkedQueue<T>::DeQueue(T &x){
    LinkNode<T> *p = new LinkNode<T>;
    if(head == NULL){return false;}
    x = head -> data;
    head = head -> next;
    delete p;
    p = NULL;
    return true;    
}

template<class T>
bool LinkedQueue<T>::isEmpty(){
    return head == NULL;
}

template<class T>
void LinkedQueue<T>::makeEmpty(){
    LinkNode<T> *p = head;
    while (p != NULL){
        head = head -> next;
        delete p;
        p = head;
    }
    rear = NULL;
}

#endif