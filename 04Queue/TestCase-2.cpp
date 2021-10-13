#include<iostream>
#include"SeqQueue\SeqQueue.cpp"
#include"LinkedQueue\LinkedQueue.cpp"

using namespace std;

int main(){
    cout << "======Test: Class SeqQueue======" << endl;
    SeqQueue<int> seqStack(5);
    int x1 = 0;
    cout << endl << "Test: isEmpty() should be 1" << endl;
    cout << seqStack.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        seqStack.EnQueue(i);
    }
    cout << endl << "Test: EnQueue() performed, isFull() should be 1" << endl;
    cout << seqStack.isFull() << endl;
    cout << endl << "Test: getFront() should be 0" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.DeQueue(x1);
    cout << endl << "Test: DeQueue() performed, getFront() should be 1" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.DeQueue(x1);
    cout << endl << "Test: DeQueue() performed, getFront() should be 2" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.makeEmpty();
    cout << endl << "Test: makeEmpty() perfromed, isEmpty() should be 1" << endl;
    cout << seqStack.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;

    cout << endl;

    cout << "======Test: Class LinkedQueue======" << endl;
    LinkedQueue<int> linkedQueue;
    int x2 = 0;
    cout << endl << "Test: isEmpty() should be 1" << endl;
    cout << linkedQueue.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        linkedQueue.EnQueue(i);
    }
    cout << endl << "Test: getFront() should be 0" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.DeQueue(x2);
    cout << endl << "Test: DeQueue() performed, getFront() should be 1" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.DeQueue(x2);
    cout << endl << "Test: DeQueue() performed, getFront() should be 2" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.makeEmpty();
    cout << endl << "Test: makeEmpty() perfromed, isEmpty() should be 1" << endl;
    cout << linkedQueue.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;
    return 0;
}