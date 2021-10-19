#include <iostream>
#include "../03Stack/LinkedStack/LinkedStack.cpp"
using namespace std;

int main()
{
	int x;
	cin >> x;
	//完成程序，输出x变量所对应的2进制数。
	const char ALPHA[] = "0123456789ABCDEF";
	LinkedStack<char> stack;
	while(x > 0){
		char c = ALPHA[x % 2];
		stack.push(c);
		x /= 2;
	}
	while(!stack.isEmpty()){
		char c;
		stack.pop(c);
		cout << c;
	}
	cout << endl;
	return 0;
}
