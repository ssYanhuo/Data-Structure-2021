#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include"LinkedList.h"
#include<iostream>

using namespace std;

template<class T>
LinkedList<T>::LinkedList(){
    first = new LinkNode<T>;
}

template<class T>
LinkedList<T>::LinkedList(LinkedList<T> &L){
    first = new LinkNode<T>;
    LinkNode<T> *p = L.first -> next;
    LinkNode<T> *t = first;
    while(p != NULL){
        t -> next = new LinkNode<T>;
        t = t -> next;
        t -> data = p -> data;
        p = p -> next;
    }
}

template<class T>
LinkedList<T>::~LinkedList(){
    LinkNode<T> *p = first -> next;
    delete first;
    first = NULL;
    while(p != NULL){
        LinkNode<T> *t = p;
        p = p -> next;
        delete t;
        t = NULL;
    }
}

template<class T>
int LinkedList<T>::length(){
    LinkNode<T> *p = first -> next;
    int length = 0;
    while(p != NULL){
        length++;
        p = p -> next;
    }
    return length;
}

template<class T>
int LinkedList<T>::search(T &x){
    LinkNode<T> *p = first -> next;
    int pos = 0;
    while(p != NULL){
        if(p -> data == x){
            return pos;
        }
        p = p -> next;
        pos++;
    }
    return -1;
}

template<class T>
bool LinkedList<T>::getData(int i, T &x){
    LinkNode<T> *p = first -> next;
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
bool LinkedList<T>::setData(int i, T &x){
    LinkNode<T> *p = first -> next;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            p -> data = x;
            return true;
        }
        p = p -> next;
    }
    return false;
}

template<class T>
bool LinkedList<T>::insert(int i, T &x){
    LinkNode<T> *p = first;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            LinkNode<T> *newNode = new LinkNode<T>;
            newNode -> data = x;
            newNode -> next = p -> next;
            p -> next = newNode;
            return true;
        }
        p = p -> next;
    }
    return false;
}

template<class T>
bool LinkedList<T>::remove(int i, T &x){
    LinkNode<T> *p = first;
    for (int j = 0; j <= i; j++){
        if(p == NULL){return false;}
        if(j == i){
            LinkNode<T> *t = p -> next;
            x = t -> data;
            p -> next = t -> next;
            delete t;
            t = NULL;
            return true;
        }
        p = p -> next;
    }
    return false;
}

template<class T>
bool LinkedList<T>::isEmpty(){
    if(first -> next != NULL){
        return false;
    }
    return true;
}

template<class T>
void LinkedList<T>::makeEmpty(){
    LinkNode<T> *p = first -> next;
    while(p != NULL){
        LinkNode<T> *t = p;
        p = p -> next;
        delete t;
        t = NULL;
    }
    first -> next = NULL;
}

template<class T>
void LinkedList<T>::output(){
    LinkNode<T> *p = first -> next;
    while (p != NULL){
        cout << p -> data << ' ';
        p = p -> next;
    }
    cout << endl;
}

#endif