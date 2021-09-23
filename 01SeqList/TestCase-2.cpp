#include<iostream>
#include"SeqList\SeqList.cpp"

using namespace std;

int main(){
    cout << "======Test: Class SeqList======" << endl;
    SeqList<int> list(6);
    cout << endl << "Test: isEmpty() should be 1" << endl;
    cout << list.isEmpty() << endl;
    for(int i = 0; i < 5; i++){
        list.insert(i, i);
    }
    cout << endl << "Test: insert() performed, output() should be 0 1 2 3 4" << endl;
    list.output();
    cout << endl << "Test: isEmpty() should be 0" << endl;
    cout << list.isEmpty() << endl;
    cout << endl << "Test: isFull() should be 0" << endl;
    cout << list.isFull() << endl;
    cout << endl << "Test: search() should be 1" << endl;
    cout << list.search(1) << endl;
    cout << endl << "Test: size() should be 6" << endl;
    cout << list.size() << endl;
    cout << endl << "Test: length() should be 5" << endl;
    cout << list.length() << endl;
    int x = 5;
    list.insert(x, 5);
    cout << endl << "Test: isFull() should be 1" << endl;
    cout << list.isFull() << endl;
    list.remove(1, x);
    cout << endl << "Test: remove() performed, output() should be 0 2 3 4 5" << endl;
    list.output();
    list.setData(1, x);
    cout << endl << "Test: setData() performed, getData() should be 1" << endl;
    cout << list.getData(1, x) << endl;
    list.makeEmpty();
    cout << endl << "Test: makeEmpty() perfromed, isEmpty() should be 1" << endl;
    cout << list.isEmpty() << endl;
    cout << endl << "======Test Finished======" << endl;
    return 0;
}