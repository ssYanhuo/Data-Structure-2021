#ifndef SEQLIST_CPP
#define SEQLIST_CPP

#include<iostream>
#include"SeqList.h"

using namespace std;

template<class T>
SeqList<T>::SeqList(int max){
    this -> array = new T[max];
    this -> last = -1;
    this -> max = max;
}

template<class T>
SeqList<T>::SeqList(SeqList &L){
    this -> array = new T[L.max];
    this -> last = L.last;
    this -> max = L.max;
    for(int i = 0; i < this -> max; i++){
        this -> array[i] = L.array[i];
    }
}

template<class T>
SeqList<T>::~SeqList(){
    delete [] this -> array;
}

template<class T>
void SeqList<T>::output(){
    for(int i = 0; i <= this -> last; i++){
        cout << array[i] << ' ';
    }
    cout << endl;
}

template<class T>
bool SeqList<T>::insert(int position, T &num){
    if(this -> max == this -> last + 1){
        return false;
    }
    if(position > this -> last + 1){
        return false;
    }
    if(position < 0){
        return false;
    }
    for(int i = this -> last; i >= position; i--){
        this -> array[i + 1] = this -> array[i];
    }
    this -> array[position] = num;
    this -> last++;
        return true;
}

template<class T>
bool SeqList<T>::remove(int position, T &x){
    if(position > this -> last){
        return false;
    }
    if(position < 0){
        return false;
    }
    x = this -> array[position];
    for(int i = position; i < last; i++){
        this -> array[i] = this -> array[i + 1];
    }
    last--;
    return true;
}

template<class T>
int SeqList<T>::size(){
    return this -> max;
}

template<class T>
int SeqList<T>::length(){
    return this -> last + 1;
}

template<class T>
int SeqList<T>::search(T item){
    int result = -1;
    for(int i = 0; i <= this -> last; i++){
        if(this -> array[i] == item){
            result = i;
        }
    }
    return result;
}

template<class T>
T SeqList<T>::getData(int position, T &x){
    if(position > this -> last){
        cerr << "Error: Illegal index." << endl;
        exit(1);
    }
    if(position < 0){
        cerr << "Error: Illegal index." << endl;
        exit(1);
    }
    x = this -> array[position];
    return this -> array[position];
}

template<class T>
bool SeqList<T>::setData(int position, T &num){
    if(position > this -> last){
        return false;
    }
    if(position < 0){
        return false;
    }
    this -> array[position] = num;
    return true;
}

template<class T>
bool SeqList<T>::isEmpty(){
    return this -> last < 0;
}

template<class T>
bool SeqList<T>::isFull(){
    return this -> last >= this -> max - 1;
}

template<class T>
void SeqList<T>::makeEmpty(){
    for(int i = 0; i < this -> max; i++){
        this -> array[i] = 0;
    }
    this -> last = -1;
}

#endif