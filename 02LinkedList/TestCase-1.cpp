#include"LinkedList/LinkedList.cpp"

int main(){
    LinkedList <int> list;	
	if( list.isEmpty() )cout << "顺序表为空" << endl;
	else cout << "顺序表不为空" << endl;
	for(int i = 0; i < 5; i ++)
	{
		list.insert(i , i);
	}
	cout << "顺序表当前内容如下：" << endl;
	list.output();
	if( list.isEmpty() )cout << "顺序表为空" << endl;
	else cout << "顺序表不为空" << endl;
	int x;
	list.remove(1 , x);
	cout << "顺序表当前内容如下：" << endl;
	list.output();
	if( list.isEmpty() )cout << "顺序表为空" << endl;
	else cout << "顺序表不为空" << endl;
	cout << "顺序表内当前元素个数：" << list.length() << endl;
	x = 3;
	cout << "数据" << x << "在顺序表中的索引位置为：" << list.search(x) << endl;
	list.getData(1 , x);
	cout << "顺序表中1号索引位置的数据值为：" << x << endl;
	x = 100;
	list.setData(2 , x);
	cout << "顺序表当前内容如下：" << endl;
	list.output();
	list.makeEmpty();
	if( list.isEmpty() )cout << "顺序表为空" << endl;
	else cout << "顺序表不为空" << endl;
    return 0;
}