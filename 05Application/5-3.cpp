#include <iostream>
#include "../03Stack/LinkedStack/LinkedStack.cpp"
using namespace std;

int main()
{
	int x;	//代表一个十进制数。
	int y;	//代表进制
	cin >> x;
	cin >> y;
	//完成程序，输出x变量所对应的y进制数。
	const char ALPHA[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	LinkedStack<char> stack;
	while(x > 0){
		char c = ALPHA[x % y];
		stack.push(c);
		x /= y;
	}
	while(!stack.isEmpty()){
		char c;
		stack.pop(c);
		cout << c;
	}
	cout << endl;
	return 0;
}
