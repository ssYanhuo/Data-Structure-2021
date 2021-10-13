#include<iostream>
#include"SeqQueue\SeqQueue.cpp"
#include"LinkedQueue\LinkedQueue.cpp"

using namespace std;

int main(){
    cout << "======Test: Class SeqQueue======" << endl;
    SeqQueue<int> seqStack(5);
    int x1 = 0;
    cout << endl << "是否为空 1" << endl;
    cout << seqStack.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        seqStack.EnQueue(i);
    }
    cout << endl << "入队，是否满 1" << endl;
    cout << seqStack.isFull() << endl;
    cout << endl << "取队头 0" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.DeQueue(x1);
    cout << endl << "Test: 出队，取队头 1" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.DeQueue(x1);
    cout << endl << "Test: 出队，取队头 2" << endl;
    seqStack.getFront(x1);
    cout << x1 << endl;
    seqStack.makeEmpty();
    cout << endl << "置空 1" << endl;
    cout << seqStack.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;

    cout << endl;

    cout << "======Test: Class LinkedQueue======" << endl;
    LinkedQueue<int> linkedQueue;
    int x2 = 0;
    cout << endl << "是否为空 1" << endl;
    cout << linkedQueue.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        linkedQueue.EnQueue(i);
    }
    cout << endl << "取队头 0" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.DeQueue(x2);
    cout << endl << "出队，取队头 1" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.DeQueue(x2);
    cout << endl << "出队，取队头 2" << endl;
    linkedQueue.getFront(x2);
    cout << x2 << endl;
    linkedQueue.makeEmpty();
    cout << endl << "置空 1" << endl;
    cout << linkedQueue.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;
    return 0;
}