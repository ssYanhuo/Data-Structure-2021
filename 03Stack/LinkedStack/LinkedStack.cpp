#ifndef LINKEDSTACK_CPP
#define LINKEDSTACK_CPP

#include<iostream>
#include"LinkedStack.h"
using namespace std;

template<class T>
LinkedStack<T>::LinkedStack(){
    bottom = new LinkNode<T>;
    top = -1;
}


template<class T>
LinkedStack<T>::~LinkedStack(){
    LinkNode<T> *p = bottom -> next;
    delete bottom;
    bottom = NULL;
    while(p != NULL){
        LinkNode<T> *t = p;
        p = p -> next;
        delete t;
        t = NULL;
    }
}



template<class T>
bool LinkedStack<T>::getTop(T &x){
    int i = top;
    LinkNode<T> *p = bottom -> next;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            x = p -> data;
            return true;
        }
        p = p -> next;
    }
    return false;
}


template<class T>
bool LinkedStack<T>::push(T &x){
    int i = top + 1;
    LinkNode<T> *p = bottom;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            LinkNode<T> *newNode = new LinkNode<T>;
            newNode -> data = x;
            newNode -> next = p -> next;
            p -> next = newNode;
            top++;
            return true;
        }
        p = p -> next;
    }
    return false;
}

template<class T>
bool LinkedStack<T>::pop(T &x){
    int i = top;
    LinkNode<T> *p = bottom;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            LinkNode<T> *t = p -> next;
            x = t -> data;
            p -> next = t -> next;
            delete t;
            t = NULL;
            top--;
            return true;
        }
        p = p -> next;
    }
    return false;
}

template<class T>
bool LinkedStack<T>::isEmpty(){
    if(bottom -> next != NULL){
        return false;
    }
    return true;
}

template<class T>
void LinkedStack<T>::makeEmpty(){
    LinkNode<T> *p = bottom -> next;
    while(p != NULL){
        LinkNode<T> *t = p;
        p = p -> next;
        delete t;
        t = NULL;
    }
    bottom -> next = NULL;
    top = -1;
}

template<class T>
void LinkedStack<T>::output(){
    LinkNode<T> *p = bottom -> next;
    while (p != NULL){
        cout << p -> data << ' ';
        p = p -> next;
    }
    cout << endl;
}

#endif