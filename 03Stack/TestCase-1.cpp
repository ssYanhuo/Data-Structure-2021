#include<iostream>
#include"SeqStack\SeqStack.cpp"
#include"LinkedStack\LinkedStack.cpp"

using namespace std;

int main(){

    cout << "======Test: Class SeqStack======" << endl;
    SeqStack<int> seqStack(5);
    int x1 = 0;
    cout << endl << "是否为空 1" << endl;
    cout << seqStack.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        seqStack.push(i);
    }
    cout << endl << "是否满 1" << endl;
    cout << seqStack.isFull() << endl;
    seqStack.getTop(x1);
    cout << endl << "获取栈顶 4" << endl;
    cout << x1 << endl;
    seqStack.pop(x1);
    seqStack.getTop(x1);
    cout << endl << "出栈，获取栈顶 3" << endl;
    cout << x1 << endl;
    seqStack.makeEmpty();
    cout << endl << "置空 1" << endl;
    cout << seqStack.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;

    cout << endl;

    cout << "======Test: Class LinkedStack======" << endl;
    LinkedStack<int> linkedStack;
    int x2 = 0;
    cout << endl << "是否为空 1" << endl;
    cout << linkedStack.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        linkedStack.push(i);
    }
    linkedStack.getTop(x2);
    cout << endl << "获取栈顶 4" << endl;
    cout << x2 << endl;
    linkedStack.pop(x2);
    linkedStack.getTop(x2);
    cout << endl << "出栈，获取栈顶 3" << endl;
    cout << x2 << endl;
    linkedStack.makeEmpty();
    cout << endl << "置空 1" << endl;
    cout << linkedStack.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;
    return 0;
}